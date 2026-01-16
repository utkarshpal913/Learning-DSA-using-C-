#include<iostream>
using namespace std;
int main()
{
    int i,j,num=4;
    for(i=0;i<4;i++)
    {
        for(j=0;j<num-i-1;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i+1;j++)
        {
            cout<<j;
        }
        for(j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
}