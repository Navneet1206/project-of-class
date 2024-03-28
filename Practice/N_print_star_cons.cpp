#include <iostream>
using namespace std;
class star_N
{
public:
    star_N(int size)
    {
        int i, j;
        for (i = 1; i <= size; i++)
        {
            for (j = 1; j <= size; j++)
            {
                if (i == j || j == size || j == 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << "\t";

            for (j = 1; j <= size; j++)
            {
                if (i == j || j == size || j == 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "\t";
            for (j = 1; j <= size; j++)
            {
                if (i == j || j == size || j == 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
};
int main()
{
    star_N obj(5);
    return 0;
}