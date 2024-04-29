#include <iostream>
using namespace std;
class transpose_mtrx
{
public:
    void print_transpose_mtrx()
    {
        int i, j, arr1[4][4] = {{10, 10, 10, 10}, {20, 20, 20, 20}, {30, 30, 30, 30}, {40, 40, 40, 40}};
        cout << "The given matrix is : \n";
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                cout << arr1[i][j] << " ";
            }
            cout << endl;
        }

        cout << "\n\n\nThe given transpose_mtrx is : \n";
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                cout << arr1[j][i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    transpose_mtrx mat;
    mat.print_transpose_mtrx();
    return 0;
}