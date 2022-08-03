#include <iostream>
using namespace std;

int summingVars(int num1);

int main() {

    int x = summingVars(10);
    cout << x;
    return 0;
}

int summingVars(int num1) {
    if (num1 > 0) {
        return num1 += summingVars(num1 - 1);
    } else {
        return 0;
    }
}
