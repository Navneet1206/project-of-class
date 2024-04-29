#include <iostream>
using namespace std;
int main() {
    class Calculator {
    private:
        int value;
    public:
        Calculator() : value(0) {}

        void add(int num) {
            value += num;
        
        }

        void subtract(int num) {
            value -= num;
        }

        int getValue() const {
            return value;
        }
    };

    Calculator calc;
    calc.add(5);
    calc.subtract(3);
    cout << "Value: " << calc.getValue() ;

    return 0;
}
