project(ArrayList C)
file(GLOB SOURCES src/*.c src/*.h)
add_executable(ArrayList ${SOURCES})
target_include_directories(ArrayList PRIVATE src)