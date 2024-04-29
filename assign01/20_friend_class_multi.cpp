#include<iostream>
using namespace std;
class multi
{
    int value;
    friend class getvalue;
};
class getvalue
{
public:
    void show(multi &obj)
    {
        int a;
        cout<<"Enter the number : ";
        cin>>a;
        cout<<"Enter the value : ";
        cin>>obj.value;
        obj.value ;
        cout << "Multiplication of number and value is :" <<a*obj.value;
    }
};
int main()
{
    multi obj;
    getvalue object;
    object.show(obj);
    return 0;
}