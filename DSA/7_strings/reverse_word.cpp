#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string ans="";
    string str="the pen";
    reverse(str.begin(),str.end());
    for(int i=0;i<str.length();i++){
        string a="";
        while(i<str.length() && str[i]!=' '){
                  a+=str[i];
                  i++;
        }
        reverse(a.begin(),a.end());
        if(a.length()>0){
            ans+=a+" ";
        }


    }
    cout<<ans.substr(0);

}