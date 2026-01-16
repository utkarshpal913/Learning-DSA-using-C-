//exponential using binary concept
//O(log n) --- time complexity
#include<iostream>
using namespace std;
//the value of n converts itself into binary form
int main(){
    int n,x;
    double ans=1;
    cout<<"enter the value of x";
    cin>>x;
    cout<<"enter the value of n";
    cin>>n;
    if(x==0){
        cout<<0.0;
    }
    if(n==0){
        cout<<1.0;
    }
    if(x==1){
      cout<<1.0;
    }
    if(x==-1 && n%2==1){
           cout<<-1;
    }
    long binform=n;
    if (n<0){
        x=1/x;
        binform=-binform;
    }
    while(binform>0){
        if(binform%2==1){
             ans=ans*x;
        }
        x*=x;
        binform/=2;
        
    }
  cout<<ans;
}
//solved
