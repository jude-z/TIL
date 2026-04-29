cmake_minimum_required(VERSION 4.1)
project(cpp_study)

set(CMAKE_CXX_STANDARD 20)

set(PROBLEMS
    problem1-1
    problem1-2
    problem2-1
    problem2-2
    problem2-3
    problem3-1
    problem3-2
    problem4-3
    problem5-1
    problem7-1
    problem7-2
    problem8-1
    problem10-1
    problem10-2
    problem10-3
)

foreach(PROB ${PROBLEMS})
    string(REPLACE "-" "_" TARGET_NAME ${PROB})
    file(GLOB SRC_LIST "${PROB}/src/*.cpp")
    add_executable(${TARGET_NAME} ${SRC_LIST})
    target_include_directories(${TARGET_NAME} PRIVATE ${PROB}/src)
endforeach()
