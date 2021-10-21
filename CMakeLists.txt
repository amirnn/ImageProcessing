# Root
cmake_minimum_required(VERSION 3.0.0)
project(ImageProcessing VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include(conan/conanbuildinfo.cmake)
conan_basic_setup()
# include(CMake/FindQt.cmake)

# include(CTest)
enable_testing()

add_subdirectory(src)
add_subdirectory(tests)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
