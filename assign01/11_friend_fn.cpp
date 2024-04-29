#include <iostream>
class calculator
{
    int a, b;
    friend void sub(calculator &);
    friend void mul(calculator &);
    friend void div(calculator &);
    friend void add(calculator &);
};
void add(calculator &obj)
{
    obj.a = 50, obj.b = 30;
    std::cout << obj.a + obj.b << std::endl;
}
void sub(calculator &obj)
{
    obj.a = 50, obj.b = 30;
    std::cout << obj.a - obj.b << std::endl;
}
void mul(calculator &obj)
{
    obj.a = 50, obj.b = 30;
    std::cout << obj.a * obj.b << std::endl;
}
void div(calculator &obj)
{
    obj.a = 50, obj.b = 30;
    std::cout << obj.a / obj.b << std::endl;
}
int main()
{
    calculator obj;

    add(obj);
    sub(obj);
    mul(obj);
    div(obj);

    return 0;
}
