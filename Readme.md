# Image Processing Project

An image processing project using Qt, Eigen, and boost/GIL libraries.

Later, I will use OpenGL calls directly in this project for rendering images.

## For dependency management we simply we use conan

In case necessary you can initialize the conan and use the default profile. Or you can create a new profile and edit it under "~/.conan/profiles/" folder.

```shell
$ conan profile new default --detect
---- or ----
# "https://docs.conan.io/en/latest/reference/config_files/settings.yml.html"
$ conan profile new clang --detect # Adjust it to your liking.
```
I have also, included usable profiles in the profiles folder that one can use.

```shell
$ mkdir conan && cd conan
$ conan install .. --build=missing --profile default|clang -s build_type=Debug|Release # Choose a profile and a build type.
---- or ----
conan install .. --build=missing --profile profiles/conan_profile_macos -s build_type=Debug|Release
$ mkdir ../build
$ cd ../build
$ cmake ..
$ make -j8
$ ctest # Run the tests
```
