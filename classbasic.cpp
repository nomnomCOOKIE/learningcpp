#include <iostream>
using namespace std;

class MyShoes {
    public:
        string brand;
        int shoe_size;
};

int main() {

    MyShoes firstShoe;

    firstShoe.brand = "Adidas";
    firstShoe.shoe_size = 12;

    cout << firstShoe.brand << " " << firstShoe.shoe_size;

    return 0;
}
