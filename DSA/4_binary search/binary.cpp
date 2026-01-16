//binary search;

#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr,int target){
    int n=arr.size();
    int st=0,end=n-1;
     while(st<=end){
        int mid=(st+end)/2;
        if(target>arr[mid]){
             st=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }

}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    int target=5;
    int a=binarySearch(arr,target);
    cout<<a;


}