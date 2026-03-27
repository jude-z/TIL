file(GLOB SRC_LIST "src/*.cpp")

add_executable(problem1_2 ${SRC_LIST})

target_include_directories(problem1_2 PRIVATE src)