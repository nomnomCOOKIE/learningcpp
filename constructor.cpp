#include <iostream>
using namespace std;

class MyShoes {
    public:

        MyShoes() {

            cout << "Inside Constructor!!! \n";

        }

        void isDirty(bool dirty);


};

int main() {

    MyShoes firstShoe;

    firstShoe.isDirty(false);


    return 0;
}

void MyShoes::isDirty(bool dirty) {

            if (dirty) {
                cout << "Disgusting";
            } else {
                cout << "Good Job!";
            }

}
