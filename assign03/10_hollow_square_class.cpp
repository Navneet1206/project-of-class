#include<iostream>
using namespace std;
class hollow_square
{
    public :
            hollow_square(int size)
            {
                int i,j;
                for(i=1;i<=size;i++)
                {
                    for(j=1;j<=size;j++)
                    {
                        if(i==1||j==1||i==size||j==size)
                            cout<<"*";
                        else    
                            cout<<" ";
                    }
                    cout<<endl;
                }
                
            }
};
int main()
{
    hollow_square obj(5);

    return 0;
}