file(GLOB SRC_LIST "src/*.cpp")

add_executable(problem10_1 ${SRC_LIST})

target_include_directories(problem10_1 PRIVATE src)