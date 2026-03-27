file(GLOB SRC_LIST "src/*.cpp")

add_executable(problem5_1 ${SRC_LIST})

target_include_directories(problem5_1 PRIVATE src)