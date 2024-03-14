#include <iostream>
using namespace std;
class num_digit
{
public:
    int coutnum()
    {
        int num, cnt = 0;
        cout << "Enter  a number : ";
        cin >> num;

        while (num != 0)
        {
            cnt++;
            num /= 10;
        }

        return cnt;
    }
};

int main()
{
    num_digit obj;
    cout << obj.coutnum();

    return 0;
}