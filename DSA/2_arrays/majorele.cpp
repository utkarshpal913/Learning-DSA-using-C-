//normal approach for finding an maximum element in
//an array or vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=0;
    vector<int>nums={1,2,4,5,6,7,8,9};
    for(int val:nums){
          int freq=0;
          for(int ele:nums){
            if(ele==val){
                freq++;
            }
          }
          if(freq>nums.size()/2){
            cout<<val;           
            break;
          }
          else{
            cout<<-1;
            break;
          }
    }

}
