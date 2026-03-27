file(GLOB SRC_LIST "src/*.cpp")

add_executable(problem3_1 ${SRC_LIST})

target_include_directories(problem3_1 PRIVATE src)