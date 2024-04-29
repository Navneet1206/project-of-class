#include <iostream>
using namespace std;

class swapping
{
public:
    void swap(int value1, int value2)
    {
        int temp;
        temp = value1;
        value1 = value2;
        value2 = temp;
        cout << "After swap" << endl
             << "num1 = " << value1 << endl
             << "num2 = " << value2;
    }
};

int main()
{
    swapping *obj = new swapping();
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    obj->swap(num1, num2);
    delete obj;

    return 0;
}