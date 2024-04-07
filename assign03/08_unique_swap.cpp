#include <iostream>
#include <memory>
using namespace std;

class Swap {
public:
    void swapNumbers(unique_ptr<int>& num1, unique_ptr<int>& num2) {
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
};

int main() {
    unique_ptr<int> num1(new int(5));
    unique_ptr<int> num2(new int(10));

    cout << "Before swapping:" << endl;
    cout << "Num1: " << *num1 << endl;
    cout << "Num2: " << *num2 << endl;

    Swap swapObj;
    swapObj.swapNumbers(num1, num2);

    cout << "\nAfter swapping:" << endl;
    cout << "Num1: " << *num1 << endl;
    cout << "Num2: " << *num2 << endl;

    return 0;
}