#include<iostream>
using namespace std;
void volume(float circle);
class complex 
{
    public:
        void area();
       
};

void complex :: area()
{
    float radius;
    cout << "\nEnter the radius for circle : ";
    cin >> radius;
    float area=3.14 * radius * radius;
    cout << "Area of circle : " <<  area;
    volume(area);
}

void  volume(float circle)
{
    float  height;
    // cout << "\nEnter the radius for cylinder : ";
    // cin >> radius;
    cout << "\nEnter the height for cylinder : ";
    cin >> height;
    
    cout << "Volume of cylinder : " << circle* height;
}

int main()
{
    complex *obj1 = new complex();
    obj1 -> area();
   

    return 0;
}