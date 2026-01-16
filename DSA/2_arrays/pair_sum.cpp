// //brute force approach 
// //pair sum problem
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> nums={1,2,5,7,9};
//     vector<int>new_vec;
//     for(int i=0;i<nums.size();i++){
//         for(int j=i+1;j<nums.size();j++){
//             if(nums[i]+nums[j]==9){
//                 new_vec.push_back(i);
//                 new_vec.push_back(j);

//             }
//         }
//     }
//     for(int val:new_vec){
//         cout<<val<<" ";
//     }
// }
//optimized method
#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int>nums,int target,vector<int>&ans){
    int n=nums.size();
    int i=0,j=n-1;
    while(i<j){
        int pairsum=nums[i]+nums[j];
        if(pairsum>target){
            j--;
        }
        else if(pairsum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return(ans);
        }


    }


}
int main(){
    vector<int> nums={1,2,5,7,9};
    int target=9;
    vector<int>ans;
    pairsum(nums,target,ans);
    cout<<ans[0]<<" "<<ans[1];

}