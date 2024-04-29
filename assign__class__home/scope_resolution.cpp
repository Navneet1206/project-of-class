#include <iostream>

using namespace std;
class scope_reso
{

public:
    void scope_resolution_operator(); // public function
};
void scope_reso ::scope_resolution_operator()
{

    cout << "Hello world !";
}
int main()
{
    scope_reso obj;

    obj.scope_resolution_operator();
    return 0;
}