
#include <iostream>
using namespace std;
class centimeter_meter_km
{
public:
    centimeter_meter_km(float centimeter)
    {
        cout<<"In meter = "<<(centimeter/100)<<" m.";
        cout<<"\nIn kilometer = "<<(centimeter/1000)<<" km.";
    }
};
int main()
{
    float centimeter;
    cout<<"Enter the length in centimeter : ";
    cin>>centimeter;
    centimeter_meter_km obj(centimeter);

    return 0;
}