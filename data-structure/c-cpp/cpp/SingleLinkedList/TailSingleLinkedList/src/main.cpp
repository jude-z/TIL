#include <iostream>
#include "TailSIngleLinkedList.h"
using namespace std;
void print(Data data) {
    cout << data << endl;
}
int main() {
    List list;
    for (int i = 1;i<=5;i++) {
        list.insert(i);
    }

    Data data;
    if (list.first(&data)) {
        print(data);
    }
    while (list.next(&data)) {
        print(data);
    }

    if (list.first(&data)) {
        if (data == 3) list.remove();
    }
    while (list.next(&data)) {
        if (data == 3) list.remove();
    }

    if (list.first(&data)) {
        print(data);
    }
    while (list.next(&data)) {
        print(data);
    }



}