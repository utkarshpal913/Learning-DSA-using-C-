//Insertion sorting
#include<iostream>
#include<vector>
using namespace std;
int InsertiionSort(vector<int>&arr,int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
             arr[prev+1]=arr[prev];
             prev--;

        }
        arr[prev+1]=curr;

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
    InsertiionSort(arr,n);
    ans(arr,n);
}
