// #include<iostream>
// using namespace std;
// int printhello(){
//     cout<<"hello world"<<endl;
//     return 3;
// }
// int sum(int a,int b){
//        return(a+b);
// }
// int min(int a,int b){
//     if(a>b){
//         cout<<"the greater number is a";
//     }
//     else{
//         cout<<"the greater number is b";
//     }
// }
//ncr
// int sumN(int a){
//     int sum=1;
//     for(int i=1;i<=a;i++){
//         sum*=i;
//     }
//     return sum;
// }
// int sumDigit(int a){
//     int sum=0;
//     while(a>0){
//         int lastdig=a%10;
//         a=a/10;
//         sum=sum+lastdig;
//     }
//     return sum;
// }
// int main(){
//     int a;
//     cout<<"enter the first number";
//     cin>>a;
//     // cout<<"enter the second number";
//     // cin>>b;
//     // cout<<min(a,b);
//     cout<<sumDigit(a);
// }
//ncr
// int fact(int a){
//    int fact=1; 
//    for(int i=1;i<=a;i++){
//            fact*=i;
//    }
//    return fact;
// }
// int ncr(){
//     cout<<"BIONOMIAL COFFECIENT"<<endl;
//     int n,r;
//     cout<<"enter the value of n";
//     cin>>n;
//     cout<<"enter the value of r";
//     cin>>r;
//     int num1=fact(n);
//     int denom1=fact(r);
//     int denom2=fact(n-r);
//     int result=num1/(denom1*denom2);
//     return result;
        
// }
// int main(){
//     cout<<ncr();
// }
//prime no
// #include<iostream>
// using namespace std;
// int prime(int N){
//     bool a=false;
//     for(int i=2;i<=N-1;i++){
//         if(N%i==0){
//             a=true;
//         }
//     }
//     if(a==true){
//         cout<<"not prime no";
//     }
//     else{
//         cout<<"prime number";
//     }

// }
// int main(){
//     int a;
//     cout<<"enter any number";
//     cin>>a;
//     cout<<prime(a);
// }
//prime no from 1 to n;
// #include<iostream>
// using namespace std;

// int prime(int n){
//   for(int i=1;i<=n;i++){
//     bool isprime=true;
//     for(int j=2;j<=i-1;j++){
//       if(i%j==0){
//         isprime=false;
//         break;
//       }
//     }
//    if(isprime==true){
//     cout<<i<<",";
//    }
//   }
// }
// int main(){
//     cout<<"enter the number";
//     int a;
//     cin>>a;
//     prime(a);
// }
////fibonnaci series
#include<iostream>
using namespace std;

int fibbo(int n){
   int first=0,second=1,next;
   cout<<first<<endl;
   cout<<second<<endl;
   for(int i=1;i<=n-1;i++){
    next=first+second;
    cout<<next<<endl;
    first=second;
    second=next;
   }
}
int main(){
    fibbo(1);
}