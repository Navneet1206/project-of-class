#include <iostream>
using namespace std;
class largest
{
public:
    void largestedarray()
    {
        int arr[5];
        int i, lar = -1;

        cout << "Enter the elements of array : ";
        for (i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }

        for (i = 0; i < 5; i++)
        {
            if (arr[i] > lar)
            {
                lar = arr[i];
            }
        }
        cout << lar << " is largest one ";
    }
};
int main()
{
    largest obj;

    obj.largestedarray();

    return 0;
}