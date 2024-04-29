#include<iostream>
using namespace std;
class student
{
public:
    void stu_data(int rno) 
    {
        char  name[20];
        int   age;
        float height, weight;
        cout<<"Enter the student first name :  ";
        gets(name);
        cout << "\nEnter Age of Student : ";
        cin >> age;
        cout << "\nEnter Height and Weight of Student (in cm & kg respectively): ";
        cin >> height >> weight;
        cout << endl;
        cout << "Registration Number \t: " << rno << endl;
        cout << "Name \t\t\t: " << name << endl;
        cout << "Age \t\t\t: " << age << endl;
        cout << "Height \t\t\t: " << height << " cm" << endl;
        cout << "Weight \t\t\t: " << weight << " kg";
    }  
};

int main()
{
    student  obj;
    obj.stu_data(1221238);
    return 0;
}