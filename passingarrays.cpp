#include <iostream>
using namespace std;

void passingArrays(int arr[5]);

int main() {

    int myArr[5] = {10, 20, 30, 40, 50};
    passingArrays(myArr);


    return 0;
}

void passingArrays(int arr[5]) {

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "\n";
    }

}
