load("@io_bazel_rules_rust//rust:rust.bzl", "rust_library",)
package(default_visibility = ["//visibility:public"])

rust_library(
    name = "rust_c_api",
    edition = "2018",
    crate_root = "crates/c-api/src/lib.rs",
    srcs = glob(["crates/c-api/src/**/*.rs"]),
    proc_macro_deps = [
            "@proxy_wasm_cpp_host//bazel/cargo:wasmtime_c_api_macros",
    ],
    crate_features = ["jitdump", "wat", "cache"],
    crate_type = "staticlib",
    deps = [
        "@proxy_wasm_cpp_host//bazel/cargo:env_logger",
        "@proxy_wasm_cpp_host//bazel/cargo:anyhow",
        "@proxy_wasm_cpp_host//bazel/cargo:once_cell",
        "@proxy_wasm_cpp_host//bazel/cargo:wasmtime",
        "@proxy_wasm_cpp_host//bazel/cargo:wat",
        ":helpers_lib",
    ],
)

cc_library(
    name = "helpers_lib",
    srcs = [
        "crates/runtime/src/helpers.c",
    ],
)

cc_library(
    name = "c_api",
    hdrs = [
        "crates/c-api/include/wasi.h",
        "crates/c-api/include/wasmtime.h",
        "@wasm-c-api//:include/wasm.h",
    ],
    include_prefix = "wasmtime",
    includes = [
        "crates/c-api/include/",
        "include/",
    ],
    deps = [
        ":rust_c_api",
    ],
)
