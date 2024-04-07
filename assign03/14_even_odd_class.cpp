#include <iostream>
using namespace std;
class even_odd_class
{
public:
    even_odd_class(int value)
    {
        if(value%2==0)
        cout<<value<<" is a  even.";     
        else
        cout<<value<<" is a odd.";
    }
};
int main()
{
    int number;

    cout<<"Enter any even or odd number : ";
    cin>>number;

    even_odd_class obj(number);

    return 0;
}