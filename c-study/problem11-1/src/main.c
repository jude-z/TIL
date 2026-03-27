#include <stdio.h>

int main() {
    char ch[] = {'G','o','o','d',' ','t','i','m','e'};
    int len = sizeof(ch)/sizeof(char);
    for (int i = 0;i<len;i++) {
        printf("%c",ch[i]);
    }
}