#include <iostream>
using namespace std;
class sum_ary
{
public:
    void print_sum()
    {
        int i, j;
        int sum[3][3];
        int arr01[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int arr02[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                sum[i][j] = arr01[i][j] + arr02[i][j];
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    sum_ary sum;
    sum.print_sum();
    return 0;
}