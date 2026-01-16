#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;
int binary_search(vector<int>arr,int n, int start, int end, int target){
    if(start<=end){
        int mid=start +(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            return binary_search(arr,n,start,mid-1,target);
        }
        else{
            return binary_search(arr,n,mid+1,end,target);
        }
    }
    return -1;

}

int main() {
        vector<int>arr={-1,2,3,4,5,6,7,8,9,0};
        cout<<binary_search(arr,10,0,9,6);
    
    return 0;
}