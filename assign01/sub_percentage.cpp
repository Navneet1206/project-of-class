#include <iostream>
using namespace std;
class marks
{
public:
    void overall_marks()
    {
        int ds, toc, cpp, total;
        cout << "Enter  Marks in Data Structures : ";
        cin >> ds;
        cout << "Enter marks in TOc : ";
        cin >> toc;
        cout << "Enter marks in cpp : ";
        cin >> cpp;

        total = ds + toc + cpp;
        percentage(total);
    }
    void percentage(int all_sum)
    {
        float percent;
        cout << "\nTotal marks : " << all_sum;

        percent = (all_sum / 3);

        cout << "\n Percentage of subjects : " << percent << "%";
    }
};
int main()
{
    marks obj;
    obj.overall_marks();
    return 0;
}