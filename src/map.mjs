// Disk-format reader for the shipped TERRANMAP version 5 files.
// Evidence and scope: analysis/port/maps-format.md. This preserves on-disk
// records; it does not apply the native loader's post-load state changes.
const SIGNATURE = Uint8Array.of(0x54, 0x45, 0x52, 0x52, 0x41, 0x4e, 0x4d, 0x41, 0x50, 0, 0x1a);
const PREFIX_BYTES = 15;
const HEADER_BYTES = 0xaa4;
export const MAP_TILE_BYTES = 44;

export class MapFormatError extends Error {
  constructor(message) {
    super(message);
    this.name = 'MapFormatError';
  }
}

function snapshot(input) {
  if (input instanceof ArrayBuffer) return new Uint8Array(input).slice();
  if (ArrayBuffer.isView(input)) {
    return new Uint8Array(input.buffer, input.byteOffset, input.byteLength).slice();
  }
  throw new TypeError('Map input must be an ArrayBuffer or an ArrayBuffer view.');
}

/**
 * Read a standalone .MP file, not a .SAV game or an initialized game world.
 * Raw arrays share an owned snapshot, so changing the caller's input cannot
 * alter the parsed result. Returned raw arrays remain ordinary mutable arrays.
 * Only version 5 is supported; later versions are deliberately not guessed.
 */
export function parseMap(input) {
  const bytes = snapshot(input);
  if (bytes.byteLength < PREFIX_BYTES) throw new MapFormatError('Truncated map prefix.');
  if (!SIGNATURE.every((value, index) => bytes[index] === value)) {
    throw new MapFormatError('Expected TERRANMAP signature, NUL, and 0x1a terminator.');
  }
  const view = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
  const version = view.getUint32(11, true);
  if (version !== 5) throw new MapFormatError(`Unsupported map version ${version}; only version 5 is verified.`);

  const tileOffset = PREFIX_BYTES + HEADER_BYTES;
  if (bytes.byteLength < tileOffset) throw new MapFormatError('Truncated map header.');
  const headerInt = offset => view.getInt32(PREFIX_BYTES + offset, true);
  const width = headerInt(0);
  const height = headerInt(4);
  if (width <= 0 || width % 2 !== 0 || height <= 0) {
    throw new MapFormatError('Map dimensions require a positive even width and a positive height.');
  }
  const rowStride = width / 2;
  const tileCount = rowStride * height;
  const coarseWidth = Math.trunc((width + 4) / 5);
  const coarseHeight = Math.trunc((height + 4) / 5);
  const secondaryBytes = Math.trunc((coarseWidth + 1) / 2) * coarseHeight;
  const secondaryOffset = tileOffset + tileCount * MAP_TILE_BYTES;
  const expectedBytes = secondaryOffset + secondaryBytes;
  if (!Number.isSafeInteger(expectedBytes) || tileCount > 0x7fffffff) {
    throw new MapFormatError('Map dimensions exceed the supported integer layout.');
  }
  // The original allocator recomputes these values. Our reader additionally
  // checks their stored copies so inconsistent files do not appear verified.
  if (headerInt(0x14) !== tileCount) throw new MapFormatError('Stored tile count disagrees with map dimensions.');
  if (headerInt(0xa24) !== coarseWidth || headerInt(0xa28) !== coarseHeight || headerInt(0xa2c) !== secondaryBytes) {
    throw new MapFormatError('Stored secondary-buffer dimensions disagree with map dimensions.');
  }
  if (bytes.byteLength !== expectedBytes) {
    throw new MapFormatError(`Map byte length ${bytes.byteLength} does not match the verified layout (${expectedBytes}).`);
  }

  function tileAtIndex(index) {
    if (!Number.isInteger(index) || index < 0 || index >= tileCount) {
      throw new RangeError(`Tile index must be an integer between 0 and ${tileCount - 1}.`);
    }
    const offset = tileOffset + index * MAP_TILE_BYTES;
    return {
      raw: bytes.subarray(offset, offset + MAP_TILE_BYTES),
      flags: view.getUint32(offset + 8, true),
      factionNibble: bytes[offset + 2] & 0x0f,
    };
  }

  return {
    version,
    width,
    height,
    rowStride,
    tileCount,
    mapFlags: view.getUint32(PREFIX_BYTES + 0x1c, true),
    rawBytes: bytes,
    rawHeader: bytes.subarray(PREFIX_BYTES, tileOffset),
    rawTiles: bytes.subarray(tileOffset, secondaryOffset),
    rawSecondary: bytes.subarray(secondaryOffset),
    tileAtIndex,
  };
}
