#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>arr,int n,int m,int maxallvalue){
    int painters=1,time=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxallvalue){
            return false;
        }
        if(arr[i]+time<=maxallvalue){
            time+=arr[i];
        }
        else{
            painters++;
            time=arr[i];
        }
    }
     return painters>m?false:true;

    
      
}
int painters(vector<int>arr,int n,int m){
    if(m>n){
        return -1;
    }
    int sum=0;
    int start=0;
    for(int i:arr){
         sum+=i;
         start=max(start,i);  
    }
    
    int end=sum;
    int ans;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
      start=mid+1;
        }
    }
    return ans;
    

}
int main(){
    vector<int> arr={10,20,30,40};
    int n=4,m=7;
    cout<<painters(arr,n,m);
}