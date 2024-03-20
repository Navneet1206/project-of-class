#include<iostream>
using namespace std;
class info
{
    int value;
    friend class getvalue;
};
class getvalue
{
public:
    void show(info &obj)
    {
        obj.value = 10;
        cout << "Value is :" <<obj.value;
    }
};
int main()
{
    info obj;
    getvalue object;
    object.show(obj);
    return 0;
}