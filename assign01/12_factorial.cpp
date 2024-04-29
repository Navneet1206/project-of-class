#include <iostream>
using namespace std;
class factorial
{
public:
    void fat(int n);
};
int main()
{
    factorial fact;
    fact.fat(5);
    return 0;
}
void factorial::fat(int n)
{
    int i, res = 1;
    for (i = 1; i <= n; ++i)
    {
        res *= i;
    }
    cout << "\nFatorial of " << n << " is: " << res << endl;
}