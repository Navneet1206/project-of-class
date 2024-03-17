#include <iostream>
using namespace std;
class matrix
{
public:
    void print_matrix()
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
    }
};

int main()
{
    matrix mat;
    mat.print_matrix();
    return 0;
}