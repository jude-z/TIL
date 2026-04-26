#include "ArrayStack.h"
#include <iostream>
using namespace std;
void Stack::push(Data data) {
    arr[++top_index] = data;
}

Data Stack::pop() {
    if (top_index == -1) {
        cout << "No elements!!" << endl;
        exit(-1);
    }else {
        Data data = arr[top_index];
        top_index--;
        return data;
    }
}

Data Stack::peek() {
    Data data = arr[top_index];
    return data;
}

int Stack::empty() {
    return top_index == -1;
}
