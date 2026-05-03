#include "Sort.h"
#include <stdlib.h>
#include <stdio.h>

#define ARRAY_LEN 100
int priorityComp(Data data1, Data data2) {
    return data2 - data1;
}
void initialize(Data* arr);
int main() {
    Data* arr = (Data*)malloc(sizeof(Data) * ARRAY_LEN);
    initialize(arr);

}

