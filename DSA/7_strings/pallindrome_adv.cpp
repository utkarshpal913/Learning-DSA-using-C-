#include<iostream>
#include<string>
using namespace std;
bool isAlphaNumeric(char str){
    if((str>='0' && str<='9') || (str>='a' && str<='z')){
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
    bool a=true;
    string s="Ac3?e3c&a";
    int start=0,end=s.size()-1;
    while(start<end){
        if(!isAlphaNumeric(tolower(s[start]))){
            start++;
            continue;
        }
        if(!isAlphaNumeric(tolower(s[end]))){
            end--;
            continue;
        }
        if(tolower(s[start])!=tolower(s[end])){
            a=false;
            break;
        }
        else{
            start++;
            end--;
        }
        
    }
    if(a){
            cout<<"pallindrome";
        }
        else{
            cout<<"not pallindrome";
        }



}