#include<iostream>
#include<vector>
using  namespace std;
int main(){
    vector<int> arr={1,2,3,4,44,56,45};
    //vector functions 
    // cout<<arr.size();
    // cout<<endl;
    // cout<<arr.capacity()<<endl;
    // arr.push_back(4);
    // arr.pop_back();
    // arr.emplace_back(4);
    // cout<<arr.front();
    // cout<<arr.back()g;
    arr.erase(arr.begin()+1,arr.begin()+5);
    arr.insert(arr.begin(),23);
    
    cout<<arr.empty();
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }




}
