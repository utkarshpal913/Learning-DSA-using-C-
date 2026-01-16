#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main() {
    map<string,int> m1;
    m1["first"]=5;
    m1.insert({"hello",1});
    m1.emplace("pari",100);
    // for(auto p:m1){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    //  if(m1.find("utkarsh")!=m1.end()){
    //       cout<<"found";
    //  }
    cout<<m1.size();
    cout<<m1.empty();
    cout<<m1[0];
}
