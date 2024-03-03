#include <iostream>
using namespace std;
class area
{
public:
    int rectangle(int length, int breadth)
    {
        cout << " Area  of Rectangle is : " << length * breadth;
        cout << "\nRadius of circle : " << ++length;
        circle(length);
        return 0;
    }
    int circle(int radius)
    {
        cout << "\nArea of Circle is : " << 3.14 * radius * radius;
        return 0;
    }
};
int main()
{
    area obj;
    int l, b;
    cout << "Enter the length :";
    cin >> l;
    cout << "Enter the breadth :";
    cin >> b;

    obj.rectangle(l, b);

    return 0;
}