#include<iostream>
using namespace std;
class base
{
public:
    int a = 10;
   
};
class derived1 : public virtual base
{

};
class derived2 : public virtual base
{

};

class derived3 : public  derived1, public derived2
{

};

int main()
{
    derived3 object;
    cout << "Value of a : " << object.a;
    return 0;
}