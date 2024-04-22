#include<iostream>
using namespace std;
class binary_operator
{
public :
    int data;
    binary_operator(int value)
    {
        data = value;
    }

    binary_operator operator + (binary_operator &obj)
    {
        return binary_operator(data + obj.data);
    }

    void show()
    {
        cout<< " Data  =  " << data;
    }
};

int main()
{
    binary_operator obj1(10);
    binary_operator obj2(20);
    binary_operator obj3 = obj1 + obj2;
    obj3.show();

    return 0;
}