#include <iostream>
using namespace std;
class Solution
{
    int pass;
    friend void password(Solution);
};

void password(Solution obj)
{
    obj.pass = 1234567;
    int getnum;
    cout << "Enter the password : ";
    cin >> getnum;

    if (getnum == obj.pass)
    {
        cout << "\nPassword is correct";
    }
    else
    {
        cout << "\nWrong Password!! Please try again.";
    }
}
int main()
{
    Solution obj;
    password(obj);
    return 0;
}