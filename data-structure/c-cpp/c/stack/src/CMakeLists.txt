project(Stack C)
file(GLOB SOURCES src/*.c src/*.h)
add_executable(Stack ${SOURCES})
target_include_directories(Stack PRIVATE src)