#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;

void permutation(vector<int>&arr,int idx,vector<vector<int>>&ans){
       //base case
       if(idx==arr.size()){
        ans.push_back({arr});
        return;


       }
       for( int i=idx;i<arr.size();i++){
              swap(arr[idx],arr[i]);
              permutation(arr,idx+1,ans);
              //backtracking
              swap(arr[idx],arr[i]);
       }
}

int main() {
    vector<int>arr={1,2,3};
    vector<vector<int>>ans;
    permutation(arr,0,ans);
    for (auto &v : ans) {
    for (int x : v) cout << x << " ";
    cout << endl;
}


    
    return 0;
}
