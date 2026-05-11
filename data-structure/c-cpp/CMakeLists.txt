cmake_minimum_required(VERSION 3.20)
project(c_cpp_data_structure C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(C_PROJECTS
        c/ArrayList
        c/CircularLinkedList
        c/SingleLinkedList/HeadSingleLinkedList
        c/SingleLinkedList/TailSingleLinkedList
        c/DoubleLinkedList/HeadDoubleLinkedList
        c/DoubleLinkedList/TailDoubleLInkedList
        c/DoubleLinkedList/HeadTailDoubleLinkedList
        c/Stack/ArrStack
        c/Stack/LinkedListStack
        c/Stack/InfixToPostfix
        c/Queue/CircularQueue
        c/Queue/LinkedListQueue
        c/Dequeue
        c/Sort
        c/Tree/ExpressionTree
)

foreach (PROJECT IN LISTS C_PROJECTS)
    get_filename_component(BASE ${PROJECT} NAME)
    if (IS_DIRECTORY "${CMAKE_SOURCE_DIR}/${PROJECT}/src")
        set(SRC_DIR "${PROJECT}/src")
    else ()
        set(SRC_DIR "${PROJECT}")
    endif ()
    file(GLOB SRC_LIST "${SRC_DIR}/*.c")
    add_executable(c_${BASE} ${SRC_LIST})
    target_include_directories(c_${BASE} PRIVATE ${SRC_DIR})
endforeach ()

set(CPP_PROJECTS
        cpp/ArrayList
        cpp/CircularLinkedList
        cpp/SingleLinkedList/HeadSingleLinkedList
        cpp/SingleLinkedList/DummyHeadSingleLinkedList
        cpp/SingleLinkedList/HeadTailSIngleLinkedList
        cpp/SingleLinkedList/DummyTailSingleLinkedList
        cpp/DoubleLinkedList/HeadDoubleLinkedList
        cpp/DoubleLinkedList/TailDoubleLinkedList
        cpp/DoubleLinkedList/HeadTailDoubleLinkedList
        cpp/DoubleLinkedList/DummyHeadDoubleLinkedList
        cpp/DoubleLinkedList/DummyTailDoubleLInkedList
        cpp/DoubleLinkedList/DummyHeadTailDoubleLInkedList
        cpp/Queue/LinkedListQueue
        cpp/Queue/CircularQueue
        cpp/Stack/InfixToPostfix
        cpp/Stack/LInkedListStack
        cpp/Sort
)

foreach (PROJECT IN LISTS CPP_PROJECTS)
    get_filename_component(BASE ${PROJECT} NAME)
    if (IS_DIRECTORY "${CMAKE_SOURCE_DIR}/${PROJECT}/src")
        set(SRC_DIR "${PROJECT}/src")
    else ()
        set(SRC_DIR "${PROJECT}")
    endif ()
    file(GLOB SRC_LIST "${SRC_DIR}/*.cpp")
    add_executable(cpp_${BASE} ${SRC_LIST})
    target_include_directories(cpp_${BASE} PRIVATE ${SRC_DIR})
endforeach ()
