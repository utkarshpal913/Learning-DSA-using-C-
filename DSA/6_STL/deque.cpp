#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d={1,2,3,4,5,6,7,8,9,0};
    
    cout<<endl;
    d.erase(d.begin(),d.begin()+4);
    for(int i:d){
        cout<<i<<" ";
    }
}