project(LinkedList C)
file(GLOB SOURCES src/*.c src/*.h)
add_executable(LinkedList ${SOURCES})
target_include_directories(LinkedList PRIVATE src)