#include <iostream>
using namespace std;

class Temp
{
public:
    void cel_kel()
    {
        double celsius, kelvin;
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        kelvin = celsius + 273.15;
        cout << "Temperature in Kelvin: " << kelvin << " K" << endl<< endl;
    }

    void cel_fahr()
    {
        double celsius, fahrenheit;
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " °F" << endl<< endl;
    }

    void kel_cel()
    {
        double kelvin, celsius;
        cout << "Enter temperature in Kelvin: ";
        cin >> kelvin;
        celsius = kelvin - 273.15;
        cout << "Temperature in Celsius: " << celsius << " °C" << endl<< endl;
    }

    void kel_fahr()
    {
        double kelvin, fahrenheit;
        cout << "Enter temperature in Kelvin: ";
        cin >> kelvin;
        fahrenheit = (kelvin - 273.15) * 9.0 / 5.0 + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " °F" << endl<< endl;
    }

    void fahr_cel()
    {
        double fahrenheit, celsius;
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        cout << "Temperature in Celsius: " << celsius << " °C" << endl<< endl;
    }

    void fahr_kel()
    {
        double fahrenheit, kelvin;
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        kelvin = (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
        cout << "Temperature in Kelvin: " << kelvin << " K" << endl<< endl;
    }
};

int main()
{
    Temp obj;
    int ch;
    while (true)
    {
        cout << "1. Celsius to Kelvin\n";
        cout << "2. Celsius to Fahrenheit\n";
        cout << "3. Kelvin to Celsius\n";
        cout << "4. Kelvin to Fahrenheit\n";
        cout << "5. Fahrenheit to Celsius\n";
        cout << "6. Fahrenheit to Kelvin\n";
        cout << "0. Exit\n";

        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            obj.cel_kel();
            break;
        case 2:
            obj.cel_fahr();
            break;
        case 3:
            obj.kel_cel();
            break;
        case 4:
            obj.kel_fahr();
            break;
        case 5:
            obj.fahr_cel();
            break;
        case 6:
            obj.fahr_kel();
            break;
        case 0:
            exit(0);
        default:
            cout << "Invalid choice\n";
            break;
        }
    }
    return 0;
}
