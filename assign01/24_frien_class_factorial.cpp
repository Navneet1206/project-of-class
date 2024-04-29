#include <iostream>
using namespace std;
class friend_class
{
    int value;
    friend class factorial;
};
class factorial
{
public:
    void fact_display(friend_class &obj)
    {
        
        int i, f = 1,n;
        obj.value=n;
        cout << "Enter the number : ";
        cin >>n ;
        for (i = 1; i <=n; ++i)
        {
            f = f * i;
        }
        cout << "Factorial of  " << n << " is : " << f << endl;
    }
};
int main()
{
    friend_class obj1;
    factorial obj2;
    obj2.fact_display(obj1);
    return 0;
}