// //skill developing code
// //power of 2 code
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter any number";
//     cin>>num;
//     int pow=1;
//     bool a=true;
//     while(num>1){
//         if(num%2!=0){
//             a=false;
//             break;
//         }
//         else{
//             num=num/2;
//         }
        

//     }
//     if(a==true){
//         cout<<"the no is of power 2";
//     }
//     else{
//         cout<<"the no is not of power 2";
//     }
// }    
//withou using loop
#include<iostream>
using namespace std;
// bool pow(int num){
//     if(num<=0) return false;
//     return (num & (num - 1)) == 0;


// }
int main(){
    bool num;
    cout<<"enetr the number;";
    cin>>num;
    if ((num & (num - 1)) == 0)
    cout<<"the number is of power two";
    else
    cout<<"the number is not of power two";
    
}