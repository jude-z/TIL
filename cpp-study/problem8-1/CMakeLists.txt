file(GLOB SRC_LIST "src/*.cpp")

add_executable(problem8_1 ${SRC_LIST})

target_include_directories(problem8_1 PRIVATE src)