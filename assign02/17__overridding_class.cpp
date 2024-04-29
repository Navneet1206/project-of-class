#include <iostream>

class Shape
{
public:
    // Overloaded function
    void draw()
    {
        std::cout << "Drawing a shape" << std::endl;
    }
};

class Circle : public Shape
{
public:
    // Function overriding
    void draw()
    {
        std::cout << "Drawing a circle" << std::endl;
    }
};

int main()
{
    Shape shape;
    shape.draw();

    Circle circle;
    circle.draw();

    return 0;
}
