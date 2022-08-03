#include <iostream>
using namespace std;

void swapVars(int* num1, int* num2);

int main() {

    int x = 6;
    int y = 10;

    cout << "Before Swap: " << x << " " << y << "\n";

    swapVars(&x, &y);

    cout << "After Swap: " << x << " " << y << "\n";

    return 0;
}

void swapVars(int* num1, int* num2) {
    int z = *num1;
    *num1 = *num2;
    *num2 = z;
}
