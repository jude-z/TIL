file(GLOB SRC_LIST "src/*.cpp")

add_executable(problem2_3 ${SRC_LIST})

target_include_directories(problem2_3 PRIVATE src)