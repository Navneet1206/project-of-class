#include <iostream>
using namespace std;
class unary_operator
{
public:
    int data;
    unary_operator(int value)
    {
        data = value;
    }

    void operator++()
    {
        ++data;
    }

    void show()
    {
        cout << " Data  =  " << data;
    }
};

int main()
{
    unary_operator obj(10);
    ++obj;
    obj.show();

    return 0;
}