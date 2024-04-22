#include<iostream>
using namespace std;
class dynamic_constructor
{
public:
      int *ptr;
    dynamic_constructor()
    {
        ptr = new int() ;
        *ptr = 10;
        cout << "Value of the pointer is  : " << *ptr;
        delete ptr;
    }

};
int main()
{
    dynamic_constructor obj;
    return 0;
}