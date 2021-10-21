# src
set(Executable_Name main.out)

add_executable(${Executable_Name} main.cpp)
target_link_libraries(${Executable_Name} ${CONAN_LIBS})