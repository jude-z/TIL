#include <stdio.h>

int main() {
    int arr1[3][9];
    for (int i = 0;i<3;i++) {
        for (int j= 0;j<9;j++) {
            arr1[i][j] = (i+2) * (j+1);
        }
    }
    int arr2[2][4] = {{1,2,3,4},{5,6,7,8}};
    int arr3[4][2];
    for (int i= 0;i<4;i++){
        for (int j= 0;j<2;j++) {
            arr3[i][j] = arr2[j][i];
        }
    }
    int arr5[5][5];
    for (int i = 0;i<5;i++) {
        for (int j = 0;j<5;j++) {
            scanf("%d", &arr5[i][j]);
        }
    }
    for (int i = 0;i<5;i++) {
        for (int j = 0;j<5;j++) {
            arr5[i][4] += arr5[i][j];
        }
    }
    for (int i = 0;i<5;i++) {
        for (int j = 0;j<5;j++) {
            arr5[4][i] += arr5[j][i];
        }
    }
    for (int i = 0;i<5;i++) {
        arr5[4][4] += arr5[i][4];
    }

}