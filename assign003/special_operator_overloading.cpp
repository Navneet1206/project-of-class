#include<iostream>
using namespace std;
class special_operator
{
public :
    int data;
    special_operator(int value)
    {
        data = value;
    }

   friend ostream & operator << (ostream &stream1, special_operator &obj)
    {
        stream1 << obj.data;
        return stream1;
    }
};

int main()
{
    special_operator obj(10);
    cout << " Stream obj = " << obj;
    return 0;
}