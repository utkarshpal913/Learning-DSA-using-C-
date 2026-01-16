//decimal to binary conversion
#include<iostream>
using namespace std;
int main()
    //num is decimal number value hai
//     int pow=1;
//     int ans=0;
//     int num=10;
//     while(num>0){ 
//         int rem=num%2;
//         num=num/2;
//         ans=ans+(rem*pow);
//         pow*=10;
//     }
//     cout<<ans;

// }
//binary to decimal;
{
    long num=1001001000;
    int ans=0;
    int pow=1;
    while(num>0){
        int rem=num%10;
        num=num/10;
        ans=ans+(rem*pow);
        pow=pow*2;

    }
    cout<<ans;

}