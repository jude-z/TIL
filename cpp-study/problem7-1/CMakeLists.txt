file(GLOB SRC_LIST "src/*.cpp")

add_executable(problem7_1 ${SRC_LIST})

target_include_directories(problem7_1 PRIVATE src)