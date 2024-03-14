#include <iostream>
using namespace std;
class patter
{
public:
    int square_pattern()
    {
        int i, j, n;
        cout << "Enter the number of sides : ";
        cin >> n;

        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (i == 1 || j == 1 || j == n || i == n)
                    cout << "*";
                else
                    cout << " ";
            }

            cout << "\n";
        }
        return 0;
    }
};
int main()
{
    patter square;
    square.square_pattern();
    return 0;
}