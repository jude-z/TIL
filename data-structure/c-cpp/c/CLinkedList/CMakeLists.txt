project(CLinkedList C)

file(GLOB SOURCES src/*.c src/*.h)

add_executable(CLinkedList ${SOURCES})

target_include_directories(CLinkedList PRIVATE src)
