#include <iostream>
using namespace std;
class patter
{
public:
    int right_triangle_pattern()
    {
        int i, j, n;
        cout << "Enter the number of sides : ";
        cin >> n;

        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {

                cout << "*";
            }

            cout << "\n";
        }
        return 0;
    }
};
int main()
{
    patter right_triangle;
    right_triangle.right_triangle_pattern();
    return 0;
}