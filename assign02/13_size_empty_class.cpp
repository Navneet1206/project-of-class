#include<iostream>
using namespace std;
class empty{};
int main()
{
    cout <<"Size of class is : " << sizeof(empty{}) << "byte"; 
    return 0;
}