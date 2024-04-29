#include <iostream>
using namespace std;

class OuterClass
{
public:
    int outerData;

    class InnerClass
    {
    public:
        int innerData;

        void displayInnerData()
        {
            cout << "Inner data: " << innerData << endl;
        }
    };

    void displayOuterData()
    {
        cout << "Outer data: " << outerData << endl;
    }

    void createInnerAndDisplay(int innerData)
    {
        InnerClass inner;
        inner.innerData = innerData;
        inner.displayInnerData();
    }
};

int main()
{
    OuterClass outer;
    outer.outerData = 10;
    outer.displayOuterData();

    OuterClass::InnerClass inner;
    inner.innerData = 20;
    inner.displayInnerData();

    return 0;
}
