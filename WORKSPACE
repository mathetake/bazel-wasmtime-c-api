workspace(name = "proxy_wasm_cpp_host")

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

http_archive(
    name = "wasmtime",
    build_file = "//bazel/external:wasmtime.BUILD",
    strip_prefix = "wasmtime-0.20.0",
    patch_args = ["-p1"],
    patches = [
        "//:bazel/patches/wasmtime-0.20.0-fix-include-path.diff",
    ],
    sha256 = "feb29c96e053d16fe3dc91b93d7a28ab24b9c390fbdf2580547ae7fa0b8eae95",
    url = "https://github.com/bytecodealliance/wasmtime/archive/v0.20.0.tar.gz",
)

http_archive(
    name = "wasm-c-api",
    build_file = "//bazel/external:wasm-c-api.BUILD",
    strip_prefix = "wasm-c-api-d9a80099d496b5cdba6f3fe8fc77586e0e505ddc",
    sha256 = "aea8cd095e9937f1e14f2c93e026317b197eb2345e7a817fe3932062eb7b792c",
    url = "https://github.com/WebAssembly/wasm-c-api/archive/d9a80099d496b5cdba6f3fe8fc77586e0e505ddc.tar.gz",
)
