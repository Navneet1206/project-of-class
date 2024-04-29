#include <iostream>
using namespace std;
class pyramid_pattern
{
public:
    pyramid_pattern(int size)
    {
        int i, j, k;
        for (i = 1; i <= size; i++)
        {
            for(k=5;k>=i;k--)
            cout<<" ";
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
    pyramid_pattern obj(5);

    return 0;
}