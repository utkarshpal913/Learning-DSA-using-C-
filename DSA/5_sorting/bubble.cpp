//Bubble sorting
#include<iostream>
#include<vector>
using namespace std;
int bubbleSort(vector<int>&arr,int n){
    for(int i=0;i<n-i-1;i++){
        
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
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
    bubbleSort(arr,n);
    ans(arr,n);
}
