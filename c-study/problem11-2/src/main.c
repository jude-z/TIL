#include <stdio.h>

int main() {
    char ch[100];
    scanf("%s",ch);
    int length = sizeof(ch)/sizeof(char);
    char max = ch[0];
    for (int i = 0;i<length;i++) {
        if (ch[i] > max) max = ch[i];
        if (ch[i] == '\0') break;
    }
    printf("max character is %c",max);

}