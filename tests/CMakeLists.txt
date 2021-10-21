# Tests
include(GoogleTest)

set(test_name test1)

add_executable(${test_name} test.cc)
target_link_libraries(${test_name} ${CONAN_LIBS})

gtest_discover_tests(${test_name})