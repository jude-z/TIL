cmake_minimum_required(VERSION 4.1)
project(c_study C)

set(CMAKE_C_STANDARD 11)

set(PROBLEMS
        problem2-1
        problem2-2
        problem3-1
        problem4-3
        problem5-1
        problem7-1
        problem7-2
        problem7-3
        problem7-4
        problem8-1
        problem8-2
        problem8-3
        problem9-1
        problem11-1
        problem11-2
        problem13-1
        problem14-1
        problem16-1
        problem17-1
)

foreach (PROBLEM IN LISTS PROBLEMS)
    string(REPLACE "-" "_" TARGET_NAME ${PROBLEM})
    file(GLOB SRC_LIST "${PROBLEM}/src/*.c")
    add_executable(${TARGET_NAME} ${SRC_LIST})
    target_include_directories(${TARGET_NAME} PRIVATE ${PROBLEM}/src)
endforeach ()
