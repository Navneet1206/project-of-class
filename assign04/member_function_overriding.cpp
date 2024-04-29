#include<iostream>
using namespace std;
class base 
{
    public:
        void show()
        {
            cout << "\nThis is base class ";
        }
};
class derived : public base
{
    public:
        void show()
        {
            cout << "\nThis is derived class ";
        }
};
int main()
{
    derived obj1,obj2;
    obj1.show();
    obj2.base::show();
    return 0;
}