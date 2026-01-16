//Bubble sorting
#include<iostream>
#include<vector>
using namespace std;
int SelectionSort(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        int small_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[small_idx]>arr[j]){
                small_idx=j;
            }
            swap(arr[small_idx],arr[i]);
        }
    }   
}
void ans(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr={23,21,34,23,45,65,43,21,1,23,4,5,2,4,23,44};
    int n=arr.size();
    SelectionSort(arr,n);
    ans(arr,n);
}
