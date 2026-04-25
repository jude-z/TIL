cmake_minimum_required(VERSION 3.20)
project(c_cpp_data_structure C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

add_executable(c_ArrayList
        c/ArrayList/src/main.c
        c/ArrayList/src/ArrayList.c)
target_include_directories(c_ArrayList PRIVATE c/ArrayList/src)

add_executable(c_CircularLinkedList
        c/CircularLinkedList/src/main.c
        c/CircularLinkedList/src/CircularLinkedList.c)
target_include_directories(c_CircularLinkedList PRIVATE c/CircularLinkedList/src)

add_executable(c_HeadSingleLinkedList
        c/SingleLinkedList/HeadSingleLinkedList/src/main.c
        c/SingleLinkedList/HeadSingleLinkedList/src/HeadSingleLinkedList.c)
target_include_directories(c_HeadSingleLinkedList PRIVATE c/SingleLinkedList/HeadSingleLinkedList/src)

add_executable(c_TailSingleLinkedList
        c/SingleLinkedList/TailSingleLinkedList/src/main.c
        c/SingleLinkedList/TailSingleLinkedList/src/TailSingleLinkedList.c)
target_include_directories(c_TailSingleLinkedList PRIVATE c/SingleLinkedList/TailSingleLinkedList/src)

add_executable(c_HeadDoubleLinkedList
        c/DoubleLinkedList/HeadDoubleLinkedList/src/main.c
        c/DoubleLinkedList/HeadDoubleLinkedList/src/HeadDoubleLinkedList.c)
target_include_directories(c_HeadDoubleLinkedList PRIVATE c/DoubleLinkedList/HeadDoubleLinkedList/src)

add_executable(c_TailDoubleLinkedList
        c/DoubleLinkedList/TailDoubleLInkedList/src/main.c
        c/DoubleLinkedList/TailDoubleLInkedList/src/TailDoubleLinkedList.c)
target_include_directories(c_TailDoubleLinkedList PRIVATE c/DoubleLinkedList/TailDoubleLInkedList/src)

add_executable(c_HeadTailDoubleLinkedList
        c/DoubleLinkedList/HeadTailDoubleLinkedList/src/main.c
        c/DoubleLinkedList/HeadTailDoubleLinkedList/src/HeadTailDoubleLinkedList.c)
target_include_directories(c_HeadTailDoubleLinkedList PRIVATE c/DoubleLinkedList/HeadTailDoubleLinkedList/src)

add_executable(cpp_ArrayList
        cpp/ArrayList/src/main.cpp
        cpp/ArrayList/src/ArrayList.cpp)
target_include_directories(cpp_ArrayList PRIVATE cpp/ArrayList/src)

add_executable(cpp_CircularLinkedList
        cpp/CircularLinkedList/src/main.cpp
        cpp/CircularLinkedList/src/CircularList.cpp)
target_include_directories(cpp_CircularLinkedList PRIVATE cpp/CircularLinkedList/src)

add_executable(cpp_HeadSingleLinkedList
        cpp/SingleLinkedList/HeadSingleLinkedList/src/main.cpp
        cpp/SingleLinkedList/HeadSingleLinkedList/src/HeadSingleLinkedList.cpp)
target_include_directories(cpp_HeadSingleLinkedList PRIVATE cpp/SingleLinkedList/HeadSingleLinkedList/src)

add_executable(cpp_HeadTailSingleLinkedList
        cpp/SingleLinkedList/HeadTailSIngleLinkedList/main.cpp
        cpp/SingleLinkedList/HeadTailSIngleLinkedList/HeadTailSingleLinkedList.cpp)
target_include_directories(cpp_HeadTailSingleLinkedList PRIVATE cpp/SingleLinkedList/HeadTailSIngleLinkedList)

add_executable(cpp_HeadDoubleLinkedList
        cpp/DoubleLinkedList/HeadDoubleLinkedList/src/main.cpp
        cpp/DoubleLinkedList/HeadDoubleLinkedList/src/HeadDoubleLinkedList.cpp)
target_include_directories(cpp_HeadDoubleLinkedList PRIVATE cpp/DoubleLinkedList/HeadDoubleLinkedList/src)

add_executable(cpp_TailDoubleLinkedList
        cpp/DoubleLinkedList/TailDoubleLinkedList/src/main.cpp
        cpp/DoubleLinkedList/TailDoubleLinkedList/src/TailDoubleLinkedList.cpp)
target_include_directories(cpp_TailDoubleLinkedList PRIVATE cpp/DoubleLinkedList/TailDoubleLinkedList/src)

add_executable(cpp_HeadTailDoubleLinkedList
        cpp/DoubleLinkedList/HeadTailDoubleLinkedList/src/main.cpp
        cpp/DoubleLinkedList/HeadTailDoubleLinkedList/src/HeadTailDoubleLInkedList.cpp)
target_include_directories(cpp_HeadTailDoubleLinkedList PRIVATE cpp/DoubleLinkedList/HeadTailDoubleLinkedList/src)
