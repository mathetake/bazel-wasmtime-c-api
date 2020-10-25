load("@io_bazel_rules_rust//rust:rust.bzl",
 "rust_library",
 "rust_binary",
 "rust_test",
)

rust_library(
    name = "c_api",
    srcs = glob(["src/*.rs"]),
    edition = "2018",
    visibility = ["//visibility:public"],
    rustc_flags = ["--release"],
    proc_macro_deps = [
            "//bazel/cargo:wasmtime_c_api_macros",
    ],
    deps = [
        "//bazel/cargo:env_logger",
        "//bazel/cargo:anyhow",
        "//bazel/cargo:once_cell",
        "//bazel/cargo:wasmtime",
        "//bazel/cargo:wat",
    ],
)
