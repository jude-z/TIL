project(HanoiTower C)

file(GLOB SOURCES src/*.c)

add_executable(HanoiTower ${SOURCES})

target_include_directories(HanoiTower PRIVATE src)
