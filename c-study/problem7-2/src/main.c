#include <stdio.h>

int main() {
    int dan = 2;
    do {
        int cnt = 1;
        do {
            printf("%d X %d = %d\n",dan,cnt,dan*cnt);
            cnt++;
        }while (cnt < 10);
        dan++;
    }while (dan < 10);
}