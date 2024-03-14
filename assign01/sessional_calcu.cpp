#include <iostream>

using namespace std;
class sessional
{

public:
    void Cpp(int ses01, int ses02); // public function
    void DS(int ses01, int ses02);
};
void sessional ::Cpp(int ses01, int ses02)
{

    cout << ses01 + ses02 << endl;
}
void sessional ::DS(int ses01, int ses02)
{

    cout << ses01 + ses02;
}
int main()
{
    sessional obj;

    obj.Cpp(10, 20);
    obj.DS(30, 40);
    return 0;
}