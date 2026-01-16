// #include <iostream>
// #include<algorithm>
// #include<vector>
// //#include<>
// using namespace std;
// void subset(vector<int>&arr,vector<int>&ans,int i){
//     //printing of answer 
//     //base code
//     if(i==arr.size()){
//         for(int val:ans){
//            cout<<val<<" ";
//         }
//          cout<<endl;
//     return;
//     }
//     //putting values in the answer
//     ans.push_back(arr[i]);
//     subset(arr,ans,i+1);
//     //backtracking
//     ans.pop_back();
//     subset(arr,ans,i+1);


    
// }

// int main() {
//     vector<int>arr={1,2,3};
//     vector<int>ans;
//     subset(arr,ans,0);
    
//     return 0;
// }


///////////subsets 2
#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;
void subset(vector<int>arr,vector<int>ans,int i){
    if(i==arr.size()){
        for( int val:ans){
            cout<<val;

        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);
    subset(arr,ans,i+1);
    ans.pop_back();

    int idx=i+1;
    while(idx<arr.size() && arr[idx]==arr[idx-1]){
        idx++;

    }
    subset(arr,ans,idx);



}

int main() {
    vector<int>arr={1,2,2};
    sort(arr.begin(),arr.end());
    vector<int>ans;
    subset(arr,ans,0);


    return 0;
}