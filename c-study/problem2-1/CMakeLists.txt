# 현재 폴더(problem2-1) 기준 src 폴더의 모든 .c 파일을 스캔
file(GLOB SRC_LIST "src/*.c")

# 실행 파일 생성 (이름: problem2_1)
add_executable(problem2_1 ${SRC_LIST})

# 헤더 파일 경로 설정
target_include_directories(problem2_1 PRIVATE src)