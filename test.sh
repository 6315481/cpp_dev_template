set -e -x

./build.sh --target test --not-install
cd ./build/test && ctest