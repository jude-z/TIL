#include <stdio.h>

int main() {
    int cnt = 0;
    while (cnt < 5) {
        int i = 0;
        while (i < cnt) {
            printf("O");
            i++;
        }
        printf("*\n");
        cnt++;
    }
}