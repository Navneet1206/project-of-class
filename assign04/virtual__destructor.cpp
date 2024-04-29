#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "\nThis is the base class constructor\n";
    }
    virtual ~ base()
    {
        cout << "\nThis is the base class destructor\n";
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "\nThis is the derived class constructor\n";
    }
    ~derived()
    {
        cout << "\nThis is the derived class destructor\n";
    }
};
int main()
{
    base *bptr = new derived;
    delete bptr;

    return 0;
}