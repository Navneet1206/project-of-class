#include <iostream>
using namespace std;
class sub_ary
{
public:
    void print_sub()
    {
        int i, j;
        int sub[3][3];
        int arr01[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
        int arr02[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                sub[i][j] = arr01[i][j] - arr02[i][j];
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << sub[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    sub_ary sub;
    sub.print_sub();
    return 0;
}