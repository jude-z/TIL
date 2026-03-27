file(GLOB SRC_LIST "src/*.cpp")

add_executable(problem1_1 ${SRC_LIST})

target_include_directories(problem1_1 PRIVATE src)