#include <iostream>
#include <utility> // for std::swap
using namespace std;

class swapping
{
public:
    class innerswap
    {
    public:
        void swapy(int a, int b) 
        {
            std::swap(a, b);                                     
            cout << "Swapped values: " << a << " " << b << endl; 
        }
    };
};

int main()
{
    swapping::innerswap sw;
    int x = 5, y = 7;
    sw.swapy(x, y); // Pass by reference
    return 0;
}
