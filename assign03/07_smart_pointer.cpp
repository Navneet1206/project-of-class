#include<iostream>
#include<memory>
using namespace std;

class smart
{
public:
    int unique()
    {
        return 0;
    }
};

int main()
{
    unique_ptr<smart> ptr(new smart); 
    cout << "Address of ptr: " << ptr.get() << endl;
    
    
    ptr.reset();
    cout << "Address of ptr: " << ptr.get() << endl; 
    return 0;
}