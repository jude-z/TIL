#include <iostream>

using namespace std;

class Calculator {
private:
    int add_cnt;
    int min_cnt;
    int mul_cnt;
    int div_cnt;
public:
    void Init();
    double Add(double a, double b);
    double Div(double a, double b);
    double Min(double a, double b);
    double Mul(double a, double b);
    void ShowOpCount();
};

void Calculator::Init() {
    add_cnt = 0;
    min_cnt = 0;
    mul_cnt = 0;
    div_cnt = 0;
}

double Calculator::Add(double a, double b) {
    add_cnt++;
    return a + b;
}

double Calculator::Min(double a, double b) {
    min_cnt++;
    return a-b;
}

double Calculator::Mul(double a, double b) {
    mul_cnt++;
    return a*b;
}

double Calculator::Div(double a, double b) {
    div_cnt++;
    return a/b;
}

void Calculator::ShowOpCount(){
    cout << add_cnt << " " << min_cnt << " " << mul_cnt << " " << div_cnt;
}

int main() {
    Calculator cal{};
    cal.Init();
    cal.Add(1,1);
    cal.Add(1,1);
    cal.Min(1,1);
    cal.Div(1,1);
    cal.ShowOpCount();
}