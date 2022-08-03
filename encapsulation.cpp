#include <iostream>
using namespace std;


class Employee {

    private:
        int salary = 0;

    public:
        void setSalary(int s) {
            salary += s;
        }

        int getSalary() {
            return salary;
        }

};

int main() {

    Employee myObj;

    myObj.setSalary(100);
    cout << myObj.getSalary() << "\n";
    myObj.setSalary(50);
    cout << myObj.getSalary() << "\n";

   return 0;
}
