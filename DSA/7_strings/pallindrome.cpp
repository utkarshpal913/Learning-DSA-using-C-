//checking wether the string is pallindrome or not
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    cout<<"enter the string";
    string str;
    getline(cin, str);
    string temp=str;
    reverse(temp.begin(),temp.end());
    if(str==temp){
        cout<<"pallindrome string";
    }
    else{
        cout<<"not pallindrome";
    }


}