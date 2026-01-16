#include<iostream>
#include<utility>
#include<vector>
using namespace std;
// int main(){
//     pair<pair<int,int>,int> p={{1,2},2};
//     cout<<p.first.first;
//     cout<<endl<<p.second;

// }
int main(){
    vector<pair<int,long long>> vp={{1,2},{3,4},{4,5}};
    vp.push_back({1,2});
    vp.emplace_back(90,10000);
    for(auto i: vp){
        cout<<i.first<<" "<<i.second<<endl;
    }
}