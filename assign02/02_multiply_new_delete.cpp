#include<iostream>
using namespace std;

class multi
{
    public:
    void multiplication(int value1, int value2)
    {
        float multiplication;
        multiplication = value1 * value2;
        cout << "Multiplication = " << multiplication << endl;
    }
};

int main()
{
    multi *obj = new multi();
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    obj -> multiplication(num1, num2);
    delete obj;
    
    return 0;
}