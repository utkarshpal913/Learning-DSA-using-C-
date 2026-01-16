#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int main(){
    // char str[100]="hello world";
    // //accesing the element
    // cout<<str[0];
    // //try to find the length l
    // int length=0;
    // for(int i=0;str[i]!='\0';i++){
    //         length++;

    // }
    // cout<<length;
    string str="hello world";
    // 
    reverse(str.begin(),str.end());
    cout<<str;
}

