#include <iostream>
using namespace std;
class target
{
public:
    void targetedarray()
    {
        int arr[5];
        int i;
        bool found = false;
        cout << "Enter the elements of array : ";
        for (i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }

        for (i = 0; i < 5; i++)
        {
            if (arr[i] == 5)
            {
                cout << "\tin place : " << i + 1 << " ";
                found = true;
            }
        }
        if (!found)
            cout << "Not found";
    }
};
int main()
{
    target obj;

    obj.targetedarray();

    return 0;
}