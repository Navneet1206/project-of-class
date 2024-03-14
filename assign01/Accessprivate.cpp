#include <iostream>

using namespace std;
class access
{
    int privatehai()
    {
        cout << "Your password is right";
        string ch;
        cout << "Change the information :\nEnter information : ";
        cin>>ch;
        cout<<ch;
        return 0;
    }

public:
    int publichai()
    {
        int variable;
        cout << "Enter  pin :  ";
        cin >> variable;

        if (variable == 12062004)
        {
            privatehai();
        }
        else
        {
            cout << "You did not enter right pin";
        }
    }
};
int main()
{
    access obj;

    obj.publichai();
    return 0;
}
