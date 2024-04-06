#include<iostream>
using namespace std;

class simple
{
    public:
    void simple_interest(int principle, int rate, int time)
    {
        float simple_interest;
        simple_interest = (principle * rate * time) / 100;
        cout << "Simple interest = " << simple_interest << endl;
    }
};

int main()
{
    simple *obj = new simple();
    obj -> simple_interest(10, 20, 30);
    delete obj;
    
    return 0;
}