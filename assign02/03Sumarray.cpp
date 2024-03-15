#include <iostream>
using namespace std;

class ArrayManipulator
{
public:
    void analyze()
    {
        int size;
        cout << "Enter the size of the array: ";
        cin >> size;
        int arr[size];
        cout << "Enter elements of the array: ";
        for (int i = 0; i < size; ++i)
            cin >> arr[i];
        int sum = 0;
        for (int i = 0; i < size; ++i)
        {
            sum += arr[i];
        }
        cout << "Sum: " << sum << endl;
    }
};

int main()
{
    ArrayManipulator manipulator;

    manipulator.analyze();
    return 0;
}
