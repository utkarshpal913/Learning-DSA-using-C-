#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={1,2,3,5,4};
    int n=arr.size();
    //step 1 to find pivot
    int piv=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            piv=i;
            break;
        }
    }
    if(piv==-1){
        reverse(arr.begin(),arr.end());
    }
    //step 2 
    for(int i=n-1;i>=0;i--){
        if(arr[i]>arr[piv]){
            swap(arr[piv],arr[i]);
            break;
        }
    }
    //step 3
    int i=piv+1;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
