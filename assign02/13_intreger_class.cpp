#include <iostream>
using namespace std;
class integer
{
public:
    integer(int value)
    {
        if(value>=0)
        cout<<value<<" is a positive integer.";     
        else
        cout<<value<<" is a negative integer.";
    }
};
int main()
{
    int number;
    cout<<"Enter any integer number : ";
    cin>>number;
    integer obj(number);

    return 0;
}