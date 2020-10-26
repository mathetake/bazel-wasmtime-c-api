#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#include "wasmtime/include/wasm.h"
#include "wasmtime/crates/c-api/include/wasmtime.h"

int main(int argc, const char* argv[]) {
  // Initialize.
  printf("Initializing...\n");
  wasm_engine_t* engine = wasm_engine_new();
  wasm_store_t* store = wasm_store_new(engine);

  wasm_byte_vec_t wat;
  wasm_byte_vec_t source;
  wasmtime_error_t *error = wasmtime_wat2wasm(&wat, &source);
}
