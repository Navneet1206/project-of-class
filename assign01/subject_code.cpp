#include <iostream>
using namespace std;
class sub_code
{

public:
    void Cpp(); // public function
    void DS();
};
void sub_code ::Cpp()
{
    cout << "Cpp" << endl;
    cout << "Cpp01" << endl;
}
void sub_code ::DS()
{
    cout << "DS" << endl;
    cout << "DS01";
}
int main()
{
    sub_code obj;

    obj.Cpp();
    obj.DS();
    return 0;
}