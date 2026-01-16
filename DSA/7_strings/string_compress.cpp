#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int idx=0;
    vector<char> s={'a','a','b','b','c','c','d','e','f','g','g'};
    int n=s.size();
   
    for(int i=0;i<n;i++){
         int count=0;
          char ch=s[i];
          while(i<n && ch==s[i]){
              count++;i++;
          }
        if(count==1){
        s[idx++]=ch;
            }
        else{
            s[idx++]=ch;
            string str=to_string(count);
            for(char dig:str){
                s[idx++]=dig;
            }

        }
        i--;

          
    }
    cout<<idx;
    
    
    

}
