#include <iostream>
#include "ArrayStack.h"

using namespace std;
int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    while (true) {
        cout << stack.pop() << endl;
    }
}