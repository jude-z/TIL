#include "PriorityQueue.h"
#include <stdio.h>
int PriorityComp(char ch1, char ch2);
int main() {
    PQueue pq;
    pqInit(&pq,PriorityComp);

    pqEnqueue(&pq,'A');
    pqEnqueue(&pq,'B');
    pqEnqueue(&pq,'C');

    printf("data : %c\n",pqDequeue(&pq));

    while (!pqEmpty(&pq)) {
        printf("data : %c\n",pqDequeue(&pq));
    }
}
int PriorityComp(char ch1, char ch2) {
    if (ch1 < ch2) return 1;
    else if (ch1 == ch2) return 0;
    else return -1;
}