#include <iostream>
using namespace std;
class arr_sum
{
public:
    void sum_array();
};
void arr_sum::sum_array()
{
    int i, sum_arr[5], arr1[5] = {10, 20, 30, 40, 50}, arr2[5] = {50, 40, 30, 20, 10}; // Declaration of two arrays and their elements.

    for (i = 0; i < 5; i++)
    {
        sum_arr[i] = arr1[i] + arr2[i];
    }
    for (i = 0; i < 5; i++)
    {
        cout << sum_arr[i] << " ";
    }
}
int main()
{
    arr_sum obj;
    obj.sum_array();
    return 0;
}