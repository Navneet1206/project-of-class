#include<iostream>
using namespace std;
class argu_constr
{
public:
    argu_constr(int arr[],int  n)  // Constructor with argument
    {
        int i,multi=1;
     
        for (i = 0; i < n; ++i)   // Printing elements of array
        {
            cout<<arr[i]<<" ";
        }

        cout<<endl;

        for (i = 0; i < n; ++i)   
        {
            multi=multi*arr[i];
            
        }

        cout<<"multiplication of array element : "<<multi;


    }
};
int main()
{
    int arr[]= {1,2,3,4,5};
    int  n = sizeof(arr)/sizeof(arr[0]);
    
    argu_constr obj(arr,n);
    
    return 0;
}