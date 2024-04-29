#include <iostream>
using namespace std;

class dangling_pointer
{
public:
    int side;
    void dangling()
    {
        cout << "Dangling pointer function called." << endl;
    }
};

int main()
{
    dangling_pointer *obj = new dangling_pointer();
    obj->dangling();
    cout << "Before delete : " << obj << endl;
    delete obj;
    cout << "After delete : " << obj << endl;
    return 0;
}
