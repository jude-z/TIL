#include "HanoiTower.h"
#include <stdio.h>
void HanoiTowerMove(int num, char from, char by, char to) {
    if (num == 1) {
        printf("%c --> %c : %d plate moving...",num,from,to);
        return;
    }
    HanoiTowerMove(num-1,from,to,by);
    HanoiTowerMove(1,from,by,to);
    HanoiTowerMove(num-1,by,from,to);
}