file(GLOB SRC_LIST "src/*.cpp")

add_executable(problem4_3 ${SRC_LIST})

target_include_directories(problem4_3 PRIVATE src)