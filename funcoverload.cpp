#include <iostream>
using namespace std;

int addingVars(int num1, int num2);

double addingVars(double num1, double num2);

int main() {

    cout << addingVars(5, 6) << "\n";
    cout << addingVars(5.4, 3.2) << "\n";

    return 0;
}

int addingVars(int num1, int num2) {
    return num1 + num2;
}

double addingVars(double num1, double num2) {
    return num1 + num2;
}
