file(GLOB SRC_LIST "src/*.cpp")

add_executable(problem2_1 ${SRC_LIST})

target_include_directories(problem2_1 PRIVATE src)