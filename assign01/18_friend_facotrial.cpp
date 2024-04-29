#include <iostream>
using namespace std;
class friend_class
{
    int fact;
    friend void factorial(friend_class);
};
void factorial(friend_class obj) // function to calculate the factorial of a number using object oriented programming concept. obj1,obj2; obj;
{
    obj.fact = 5;
    int i, multi = 1;

    for (i = 1; i <= obj.fact; i++)
    {
        multi = multi * i;
    }

    cout << "Factorial of " << obj.fact << " is : " << multi;
}
int main()
{
    friend_class obj;
    factorial(obj);
    return 0;
}