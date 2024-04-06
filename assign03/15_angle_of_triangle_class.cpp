#include <iostream>
using namespace std;
class angle_of_triangle
{
public:
    angle_of_triangle(float first_angle, float second_angle)
    {
        cout<<(180-first_angle-second_angle)<<" is the third angle of this triangle.";
    }
};
int main()
{
    float angle_1,angle_2;
    cout<<"Enter the first angle : ";
    cin>>angle_1;
    cout<<"Enter the second angle : ";
    cin>>angle_2;
    angle_of_triangle obj(angle_1,angle_2);

    return 0;
}