#include<iostream>
using namespace std;
// void changeA(int &a){
//     a=20;
// }
int main(){
   int a=10;
   int* ptr=&a;
   cout<<ptr;
   cout<<endl;
   ptr--;
   cout<<ptr;
   
}
