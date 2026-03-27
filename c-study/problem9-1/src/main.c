#include <stdio.h>
int fibo(int);
int main() {
    int count;
    scanf("%d",&count);
    for (int i = 1;i<=count;i++) {
        printf("%d\n",fibo(i));
    }
}
int fibo(int idx) {
    if (idx == 1) return 0;
    if (idx == 2) return 1;
    return fibo(idx-1) + fibo(idx - 2);
}

