file(GLOB SRC_LIST "src/*.cpp")

add_executable(problem3_2 ${SRC_LIST})

target_include_directories(problem3_2 PRIVATE src)