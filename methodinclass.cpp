#include <iostream>
using namespace std;

class MyShoes {
    public:
        void isDirty(bool dirty) {

            if (dirty) {
                cout << "Disgusting";
            } else {
                cout << "Good Job!";
            }

        }


};

int main() {

    MyShoes firstShoe;

    firstShoe.isDirty(false);


    return 0;
}
