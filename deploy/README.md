# Hosting

Target: **https://alphacentauriciv.carterpry.com**. The Worker serves files; all game execution remains in the visitor's browser. Saves belong to that browser and origin. Localhost saves can be downloaded through … → Saved games and imported on the hosted origin.

The generated site uses Workers Static Assets for the interface, artwork, runtime and archive. The two large ZIPs use a private R2 bucket. `prepare_deploy.py` splits them into content-addressed 64 MiB objects, below Wrangler's upload limit. The Worker presents each as the original contiguous file, supports HEAD, byte ranges, ETag validation and bounded streaming. No original bytes are changed. Cloudflare's [static asset limit](https://developers.cloudflare.com/workers/static-assets/billing-and-limitations/) is 25 MiB per file; the [R2 binding](https://developers.cloudflare.com/r2/api/workers/workers-api-reference/) supplies range streams.

With game/runtime data rebuilt locally and Wrangler authenticated:

```sh
python3 tools/prepare_deploy.py
python3 tools/upload_game_files.py
npx --yes wrangler@4.151.0 deploy
```

On this workstation, the inherited Cloudflare API token lacks the needed scopes. Its existing Wrangler OAuth login has access. Select it without changing global configuration:

```sh
USE_WRANGLER_OAUTH=1 python3 tools/upload_game_files.py
env -u CLOUDFLARE_API_TOKEN -u CLOUDFLARE_ACCOUNT_ID npx --yes wrangler@4.151.0 deploy
```

`output/deploy/uploaded.json` records successful content-addressed uploads for resuming the same bucket. Remove that receipt if objects were removed externally. Generated archives, chunks, browser profiles and personal saves are not committed. The public site contains generated installed artwork/game data; the GitHub source repository remains private.

The deployed default is SingleThreadedJitInput; the prior Fast fallback is also staged. Earlier diagnostic engines/legacy Wine are local-only. The worker's custom domain is managed by `wrangler.jsonc`; workers.dev and preview URLs are disabled.

Verified live: both editions reach their original menus after clicking their cover. Eleven static resources and both complete ZIP downloads match local bytes; every archive chunk boundary, suffix/end range, ETag and HEAD behavior was checked. The archive passes all six browser flows on HTTPS. See [deployment evidence](../analysis/deployment/deployment.json). Native game initialization is still substantial; the 504 MB game archive may be downloaded again when the browser does not cache such a large response.
