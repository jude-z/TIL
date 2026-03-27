#include <stdio.h>

int main() {
    int cnt;
    int num;
    int sum = 0;
    scanf("%d",&cnt);
    while (cnt-- > 0) {
        scanf("%d",&num);
        sum += num;
    }
    printf("sum is %d",sum);
}