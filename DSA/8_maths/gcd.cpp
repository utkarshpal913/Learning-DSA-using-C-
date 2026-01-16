//brute force approachment
// #include <iostream>
// #include<algorithm>
// #include<vector>
// //#include<>
// using namespace std;

// int main() {
//     int gcd;
//     int a=24,b=20;
//     int u=min(a,b);
//     for(int i=1;i<=u;i++){
//         if(a%i==0 && b%i==0){
//             gcd=i;
//         }

//     }
//     cout<<gcd;
//     return 0;

// }
#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;
int gcd(int a,int b){
  while(a>0 && b>0){  
      if(a>b){
           a=a%b;
      }
      else{
        b=b%a;
      }
      
    }  
    return a==0?b:a;
}
int main() {
    cout<<gcd(13,26);
    return 0;
}