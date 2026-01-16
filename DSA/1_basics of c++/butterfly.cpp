#include<iostream>
using namespace std;
int main()
{
    int i,j,num=10;
    //upper part
    for(i=0;i<num;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        for(j=0;j<2*(num-i-1);j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //lower part
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-i;j++)
        {
            cout<<"*";
        }
        for(j=0;j<2*i;j++)
        {
            cout<<" ";
        }
        for(j=0;j<num-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}