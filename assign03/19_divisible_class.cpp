#include <iostream>
using namespace std;
class divisible_by
{
public:
    divisible_by(int value1, int value2)
    {
        if(value2%value1==0)
        cout<<value2<<" is a divisible by "<<value1;     
        else
        cout<<value2<<" is a not divisible by" <<value1;
    }
};
int main()
{
    int number1, number2;
    cout<<"Enter any divisor number : ";
    cin>>number1;
    cout<<"Enter any divident number : ";
    cin>>number2;
    divisible_by obj(number1, number2);

    return 0;
}