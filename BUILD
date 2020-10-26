load("@io_bazel_rules_rust//rust:rust.bzl", "rust_library")

cc_binary(
    name = "example",
    srcs = ["example.cc"],
    deps = ["@wasmtime//:c_api"],
)
