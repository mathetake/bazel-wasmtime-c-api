workspace(name = "proxy_wasm_rust_sdk")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "bazel_skylib",
    sha256 = "97e70364e9249702246c0e9444bccdc4b847bed1eb03c5a3ece4f83dfe6abc44",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/bazel-skylib/releases/download/1.0.2/bazel-skylib-1.0.2.tar.gz",
        "https://github.com/bazelbuild/bazel-skylib/releases/download/1.0.2/bazel-skylib-1.0.2.tar.gz",
    ],
)

load("@bazel_skylib//:workspace.bzl", "bazel_skylib_workspace")

bazel_skylib_workspace()

http_archive(
    name = "io_bazel_rules_rust",
    sha256 = "a9548f4d36082770e891149d68b17b7afe144b0b5321d603a5cb2c16027198ab",
    strip_prefix = "rules_rust-9c889b057ddf4feddae7c5ae6913b7282154aa24",
    url = "https://github.com/bazelbuild/rules_rust/archive/9c889b057ddf4feddae7c5ae6913b7282154aa24.tar.gz",
)

load("@io_bazel_rules_rust//rust:repositories.bzl", "rust_repositories")

rust_repositories()

load("@io_bazel_rules_rust//:workspace.bzl", "rust_workspace")

rust_workspace()

load("@io_bazel_rules_rust//:workspace.bzl", "bazel_version")

bazel_version(name = "bazel_version")

load("//bazel/cargo:crates.bzl", "raze_fetch_remote_crates")

raze_fetch_remote_crates()
