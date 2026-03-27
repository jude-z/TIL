file(GLOB SRC_LIST "src/*.cpp")

add_executable(problem7_2 ${SRC_LIST})

target_include_directories(problem7_2 PRIVATE src)