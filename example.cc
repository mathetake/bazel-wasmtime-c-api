#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

#include "wasmtime/include/wasm.h"

int main(int argc, const char* argv[]) {
  // Initialize.
  printf("Initializing...\n");
  wasm_engine_t* engine = wasm_engine_new();
  wasm_store_t* store = wasm_store_new(engine);
}
