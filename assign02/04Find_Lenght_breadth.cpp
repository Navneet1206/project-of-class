#include <iostream>
using namespace std;
class rectangle
{
public:
    void area_breadth_length() // function to accept the values of length or breadth and area
    {
        int area, l, b;
        cout << "Enter area in meter square : ";
        cin >> area;
        cout << "\nEnter Breadth in meter : ";
        cin >> b;
        l = area / b; // calculating the length
        cout << "\nlength = " << l << "meter";
    }
};
int main()
{
    rectangle r1;             // object of class rectangle
    r1.area_breadth_length(); // calling member function of class rectangle
    return 0;
}