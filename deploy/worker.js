import files from '../output/deploy/large-files.json';
import { serve } from './serve.js';
export default { fetch: (request, env) => serve(request, env, files) };
