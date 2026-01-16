#include<iostream>
#include<vector>
using namespace std;
int main(){
    // bool check;
    // int n=14;
    // // cout<<"enter any number";
    // // cin>>n;
    // for(int i=2;i*i<n;i++){
    //     if(i%2==0){
    //            check=false;
    //     }
    //     else{
    //         check=true;
    //     }
    // }
    // if(!check){
    //     cout<<"prime number";
    // }
    //sieve erastothenis 
    int ans=0;
    int n=50;
    vector<bool> isPrime(n+1,true);
    for(int i=2;i<n;i++){
        if(isPrime[i]){
               cout<<i<<" ";
        }
        for(int j=i*2;j<n;j+=i){
            isPrime[j]=false;
        }
    }
    // cout<<ans;


}
