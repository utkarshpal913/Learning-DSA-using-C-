#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;
bool col_search(vector<vector<int>>arr,int m,int n,int target){
        int st=0,end=n-1;
        while(st<=end){
            int mid = st +(end-st)/2;
            if(target==arr[m][mid]){
                return true;
            }
            else if(target>arr[m][mid]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;

}
bool row_search(vector<vector<int>>arr,int m,int n,int target){
    int start=0,end=m-1;
    while(start<=end){
        int mid=start +(end-start)/2;
        if(arr[mid][0]<=target && target<=arr[mid][n-1]){
             return col_search(arr,mid,n,target);
        }
        if(target>arr[mid][n-1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    return false;

}

int main() {
    //Binary Search on 2d Array
        vector<vector<int>> arr={
            {1,2,3},
            {4,5,6},
            {7,8,9},
        };
        int m=arr.size(),n=arr[0].size();
        int target =100;
        if(row_search(arr, m, n, target)){
            cout<<"founded";
        }
        else{
              cout<<"not found";
        }

    return 0;
}