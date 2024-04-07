#include <iostream>

class Circle {
public:
    // Overloaded function
    void draw() {
        std::cout << "Drawing a circle" << std::endl;
    }

    // Overloaded function
    void draw(int radius) {
        std::cout << "Drawing a circle with radius " << radius << std::endl;
    }
};

int main() {
    Circle circle;
    circle.draw(); 
    circle.draw(5); 

    return 0;
}
