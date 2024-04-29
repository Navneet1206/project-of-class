#include<iostream>
using namespace std;

class cube
{
public:
    int side;
    void cube_size()
    {
        cout << "Volume = " << side*side*side;
    }
};

int main()
{
    cube obj, *obj1;
    obj1 = &obj;

    int cube :: *ptr = &cube :: side;
    obj1 ->*ptr = 20; 
    obj1 -> cube_size(); 
    return 0;
}
