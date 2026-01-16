//searching for a peak element in a vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={0,3,8,9,5,2};
    int n=arr.size();
    int st=1,end=n-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                cout<<arr[mid]<<endl;
                cout<<"index of peak element "<<mid; 
                break;

        }else if(arr[mid-1]<arr[mid]){
                 st=mid+1;
        }
        else{
            end=mid-1;
        }

    }


}