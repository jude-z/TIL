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

add_library(SingleLinkedList_HeadTail
  cpp/SingleLinkedList/HeadTailSIngleLinkedList/HeadTailSingleLinkedList.cpp
)
target_include_directories(SingleLinkedList_HeadTail PUBLIC cpp/SingleLinkedList/HeadTailSIngleLinkedList)

add_library(SingleLinkedList_Tail
  cpp/SingleLinkedList/TailSingleLinkedList/src/TailSIngleLinkedList.cpp
)
target_include_directories(SingleLinkedList_Tail PUBLIC cpp/SingleLinkedList/TailSingleLinkedList/src)

add_library(DoubleLinkedList_Tail
  cpp/DoubleLinkedList/TailDoubleLinkedList/src/TailDoubleLinkedList.cpp
)
target_include_directories(DoubleLinkedList_Tail PUBLIC cpp/DoubleLinkedList/TailDoubleLinkedList/src)

add_library(Stack
  cpp/Stack/src/Stack.cpp
)
target_include_directories(Stack PUBLIC cpp/Stack/src)

# 실행 타겟 (int main()이 구현된 것만)
add_executable(ArrayList_main cpp/ArrayList/src/main.cpp)
target_link_libraries(ArrayList_main PRIVATE ArrayList)

# 나머지 모듈 main.cpp는 아직 int main()이 비어있음.
# 구현 후 아래 주석 해제:
# add_executable(CircularLinkedList_main cpp/CircularLinkedList/src/main.cpp)
# target_link_libraries(CircularLinkedList_main PRIVATE CircularLinkedList)
# add_executable(DoubleLinkedList_Head_main cpp/DoubleLinkedList/HeadDoubleLinkedList/src/main.cpp)
# target_link_libraries(DoubleLinkedList_Head_main PRIVATE DoubleLinkedList_Head)
# add_executable(DoubleLinkedList_HeadTail_main cpp/DoubleLinkedList/HeadTailDoubleLinkedList/src/main.cpp)
# target_link_libraries(DoubleLinkedList_HeadTail_main PRIVATE DoubleLinkedList_HeadTail)
# add_executable(DoubleLinkedList_Tail_main cpp/DoubleLinkedList/TailDoubleLinkedList/src/main.cpp)
# target_link_libraries(DoubleLinkedList_Tail_main PRIVATE DoubleLinkedList_Tail)
# add_executable(Queue_main cpp/Queue/src/main.cpp)
# target_link_libraries(Queue_main PRIVATE Queue)
# add_executable(SingleLinkedList_Head_main cpp/SingleLinkedList/HeadSingleLinkedList/src/main.cpp)
# target_link_libraries(SingleLinkedList_Head_main PRIVATE SingleLinkedList_Head)
# add_executable(SingleLinkedList_HeadTail_main cpp/SingleLinkedList/HeadTailSIngleLinkedList/main.cpp)
# target_link_libraries(SingleLinkedList_HeadTail_main PRIVATE SingleLinkedList_HeadTail)
# add_executable(SingleLinkedList_Tail_main cpp/SingleLinkedList/TailSingleLinkedList/src/main.cpp)
# target_link_libraries(SingleLinkedList_Tail_main PRIVATE SingleLinkedList_Tail)
# add_executable(Stack_main cpp/Stack/src/main.cpp)
# target_link_libraries(Stack_main PRIVATE Stack)
