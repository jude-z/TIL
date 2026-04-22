project(Queue C)
file(GLOB SOURCES src/*.c src/*.h)
add_executable(Queue ${SOURCES})
target_include_directories(Queue PRIVATE src)