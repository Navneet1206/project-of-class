#include <iostream>
using namespace std;
class friend_class
{
    int value1, value2;
    friend class sum;
};
class sum
{
public:
    void display(friend_class &obj)
    {
        obj.value1 = 50;
        obj.value2 = 40;
        cout << "Sum = " << obj.value1 + obj.value2 << endl;
    }
};
int main()
{
    friend_class obj1;
    sum obj2;
    obj2.display(obj1);
    return 0;
}