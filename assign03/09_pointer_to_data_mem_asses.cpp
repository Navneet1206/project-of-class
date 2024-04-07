#include <iostream>
using namespace std;

class MyClass {
public:
    int myData;
};

int main() {
    MyClass obj;

    int MyClass::*ptr = &MyClass::myData;
    
    cout << "Value of myData using pointer: " << obj.*ptr << endl;

    obj.*ptr = 20;

    cout << "Value of myData after change using object: " << obj.myData << endl;

    return 0;
}