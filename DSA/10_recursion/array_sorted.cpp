#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;
bool isSorted(vector<int>arr,int n){
    if(n==0 || n==1){
        return true;
    }
    return(arr[n-1]>=arr[n-2] &&  isSorted(arr,n-1));
    
}

int main() {
    vector<int>arr={1,2,9,4,5};
    int n=arr.size();
    cout<<isSorted(arr,n);
    return 0;
}