#include <iostream>
using namespace std;
class student
{
public:
    int id, age;
    void show(int value1, int value2)
    {
        this->id = value1;
        this->age = value2;
        cout << "Id : " << id << endl;
        cout << "Age : " << age << endl;
    }
};
int main()
{
    student obj1, obj2;
    obj1.show(10, 20);
    obj2.show(30, 40);
    return 0;
}