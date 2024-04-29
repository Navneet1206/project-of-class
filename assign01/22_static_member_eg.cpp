#include <iostream>
using namespace std;
class student
{
public:
    static int rating;
};
int student::rating = 0;
int main()
{
    cout << "value = " << student::rating << endl;
    return 0;
}