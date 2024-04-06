#include <iostream>
using namespace std;
class right_triangle_pattern
{
public:
    right_triangle_pattern(int size)
    {
        int i, j, k;
        for (i = 1; i <= size; i++)
        {
           
            for (j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
};
int main()
{
    right_triangle_pattern obj(5);

    return 0;
}