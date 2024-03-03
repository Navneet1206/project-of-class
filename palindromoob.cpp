#include<iostream>
using namespace std;

class palindrom
{
public:
    int ultaseedha(int value)
    {
        if(value<0)
        {
            cout<<"Wrong";
            return -1;
        }
        else
        {
            int i,reverse=0,original=value;
            for(i=value;i!=0;i/=10)
            {
                int digit=i%10;
                reverse=reverse*10+digit;
            }
            return reverse;
        }       
    }
};
int main ()
{
    palindrom ulta;
    int originalvalue;
    cout<<"Enter the number :";
    cin>>originalvalue;
    
   int reversedvalue = ulta.ultaseedha(originalvalue);
    
    if(originalvalue==reversedvalue)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}