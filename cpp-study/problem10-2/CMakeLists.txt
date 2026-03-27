file(GLOB SRC_LIST "src/*.cpp")

add_executable(problem10_2 ${SRC_LIST})

target_include_directories(problem10_2 PRIVATE src)