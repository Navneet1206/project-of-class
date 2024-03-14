#include <iostream>
using namespace std;
class shorting
{
public:
    int sort() // function to perform bubble sort on the array.
    {
        int arr[10];
        cout << "Enter number of elements you want : \n";
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
        cout << "\nSorted array :";
        for (int i = 0; i < 10 - 1; i++) // outer loop runs n-1 times as last element is already in place
        {
            for (int j = 0; j < 10 - i - 1; j++) // inner loop will run n-i-1 time because we have already sorted first i       //variable to check if any swap has been
            {
                if (arr[j] < arr[j + 1]) //Only  one change is done per iteration, so no need
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    shorting obj;

    obj.sort();

    return 0;
}