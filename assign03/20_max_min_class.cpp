#include <iostream>
using namespace std;
class max_min
{
public:
    max_min(int value1, int value2)
    {
        if(value2>value1)
        cout<<value2<<" is a greater than "<<value1;     
        else
        cout<<value1<<" is a greater than" <<value2;
    }
};
int main()
{
    int number1, number2;
    cout<<"Enter first number : ";
    cin>>number1;
    cout<<"Enter second number : ";
    cin>>number2;
    max_min obj(number1, number2);

    return 0;
}