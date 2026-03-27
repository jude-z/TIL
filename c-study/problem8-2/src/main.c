#include <stdio.h>

int main() {
    for (int a = 0;a<10;a++) {
        for (int z = 0;z<10;z++) {
            int num1 = 10*a + z;
            int num2 = 10*z + a;
            if (num1 + num2 == 99) printf("%d + %d = 99\n",num1,num2);
        }
    }

}