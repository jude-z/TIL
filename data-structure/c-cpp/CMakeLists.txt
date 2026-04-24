cmake_minimum_required(VERSION 3.14)
project(c_cpp CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

enable_testing()

# Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# 라이브러리 정의
add_library(ArrayList
  cpp/ArrayList/src/ArrayList.cpp
)
target_include_directories(ArrayList PUBLIC cpp/ArrayList/src)

add_library(CircularLinkedList
  cpp/CircularLinkedList/src/CircularList.cpp
)
target_include_directories(CircularLinkedList PUBLIC cpp/CircularLinkedList/src)

add_library(DoubleLinkedList_Head
  cpp/DoubleLinkedList/HeadDoubleLinkedList/src/HeadDoubleLinkedList.cpp
)
target_include_directories(DoubleLinkedList_Head PUBLIC cpp/DoubleLinkedList/HeadDoubleLinkedList/src)

add_library(DoubleLinkedList_HeadTail
  cpp/DoubleLinkedList/HeadTailDoubleLinkedList/src/HeadTailDoubleLinkedList.cpp
)
target_include_directories(DoubleLinkedList_HeadTail PUBLIC cpp/DoubleLinkedList/HeadTailDoubleLinkedList/src)

add_library(Queue
  cpp/Queue/src/Queue.cpp
)
target_include_directories(Queue PUBLIC cpp/Queue/src)

add_library(SingleLinkedList_Head
  cpp/SingleLinkedList/HeadSingleLinkedList/src/HeadSingleLinkedList.cpp
)
target_include_directories(SingleLinkedList_Head PUBLIC cpp/SingleLinkedList/HeadSingleLinkedList/src)

add_library(Stack
  cpp/Stack/src/Stack.cpp
)
target_include_directories(Stack PUBLIC cpp/Stack/src)
