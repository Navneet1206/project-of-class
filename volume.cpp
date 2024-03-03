#include <iostream>
using namespace std;
class volume
{
public:
    int cylinder(int radius, int height)
    {
        cout << " volume  of cylinder is : " << 3.14 * radius * radius * height;
        cout << "\nside of cube : " << ++radius;
        cube(radius);
        return 0;
    }
    int cube(int side)
    {
        cout << "\nvolume of cube is : " << side * side * side;
        return 0;
    }
};
int main()
{
    volume obj;
    int r, h;
    cout << "Enter the radius :";
    cin >> r;
    cout << "Enter the height :";
    cin >> h;

    obj.cylinder(r, h);

    return 0;
}