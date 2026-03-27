#include <iostream>
using namespace std;
int main() {
    int sell_money;
    while (1) {
        cout << "input sell_money : ";
        cin >>sell_money;
        if (sell_money == -1) {
            cout << "exit program";
            break;
        }
        cout << "this month : " << 50 + sell_money * 0.12 << endl;

    }
}