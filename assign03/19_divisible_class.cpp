#include <iostream>
using namespace std;
class divisible_by
{
public:
    divisible_by(int value1, int value2)
    {
        if(value2%value1==0)
        cout<<value1<<" is a divisible by "<<value2;     
        else
        cout<<value1<<" is a not divisible by " <<value2;
    }
};
int main()
{
    int divisor, divident;
    cout<<"Enter any divisor number : ";
    cin>>divisor;
    cout<<"Enter any divident number : ";
    cin>>divident;
    divisible_by obj(divisor, divident);

    return 0;
}