// For comments in this code and logic is used blackbox ai and chatgpt3.8 ai.
// Give another logic and better

#include <iostream>

using namespace std;

class Distance
{
public:
    // Public member variables
    int feet;
    int inches;

    // Constructor for the Distance class
    Distance(int ft, int in) : feet(ft), inches(in) {}

    // Method to add two Distance objects and return the sum as a new Distance object
    Distance add_distance(const Distance &other_distance) const
    {
        // Add the feet and inches of the current and other Distance objects
        int total_feet = feet + other_distance.feet;
        int total_inches = inches + other_distance.inches;

        // If the sum of the inches is greater than or equal to 12, adjust the feet and inches
        if (total_inches >= 12)
        {
            total_feet += total_inches / 12;
            total_inches %= 12;
        }

        // Return a new Distance object with the total feet and inches
        return Distance(total_feet, total_inches);
    }

    // Method to display the Distance object as a formatted string
    void display_distance() const
    {
        cout << feet << " feet, " << inches << " inches" << endl;
    }
};

int main()
{
    int d1_feet, d1_inches, d2_feet, d2_inches;

    // Prompt the user to enter feet and inches for distance 1
    cout << "Enter feet for distance 1: ";
    cin >> d1_feet;
    cout << "Enter inches for distance 1: ";
    cin >> d1_inches;

    // Prompt the user to enter feet and inches for distance 2
    cout << "Enter feet for distance 2: ";
    cin >> d2_feet;
    cout << "Enter inches for distance 2: ";
    cin >> d2_inches;

    // Create Distance objects d1 and d2 with user-input values
    Distance d1(d1_feet, d1_inches);
    Distance d2(d2_feet, d2_inches);

    // Add distances d1 and d2 to get the sum distance
    Distance sum_distance = d1.add_distance(d2);

    // Display the sum of distances
    cout << "Sum of distances:" << endl;
    sum_distance.display_distance();

    return 0;
}
