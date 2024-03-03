#include <iostream>
using namespace std;
class sumarr
{
public:
    void sum_of_array()
    {
        int arr1[5], arr2[5], arr3[5];
        int i;

        cout << "Enter the elements of array 01 : \n";
        for (i = 0; i < 5; i++)
        {
            cin >> arr1[i];
        }
        cout << "Enter the elements of array 02 : \n";

        for (i = 0; i < 5; i++)
        {
            cin >> arr2[i];
        }

        for (i = 0; i < 5; i++)
        {
            arr3[i] = arr1[i] + arr2[i];
        }
        cout << "Sum of array : ";
        for (i = 0; i < 5; i++)
        {
            cout << " " << arr3[i];
        }
    }
};
int main()
{
    sumarr obj;

    obj.sum_of_array();

    return 0;
}