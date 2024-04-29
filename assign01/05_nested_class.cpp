#include <iostream>

class OuterClass
{
private:
    int outerData;

    class InnerClass
    {
    private:
        int innerData;

    public:
        void initialize(int data)
        {
            innerData = data;
        }

        void displayInnerData()
        {
            std::cout << "Inner data: " << innerData << std::endl;
        }
    };

public:
    OuterClass(int data) : outerData(data) {}

    void displayOuterData()
    {
        std::cout << "Outer data: " << outerData << std::endl;
    }

    void createInnerAndDisplay(int innerData)
    {
        InnerClass inner;
        inner.initialize(innerData);
        inner.displayInnerData();
    }
};

int main()
{
    OuterClass outer(10);
    outer.displayOuterData();
    outer.createInnerAndDisplay(20);

    return 0;
}
