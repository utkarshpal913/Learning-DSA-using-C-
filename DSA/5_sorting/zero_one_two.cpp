// //D.N.F Algorithms(Sorting)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr={0,0,1,1,1,0,2,1,2,1,0,1,1};
//     int n=arr.size();
//     int c1=0,c2=0,c3=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             c1++;
//         }
//         if(arr[i]==1){
//             c2++;
//         }
//         if(arr[i]==2){
//             c3++;
//         }
//         int idx=0;
//         for(int i=0;i<c1;i++){
//             arr[idx++]=0;
//         }
//         for(int i=0;i<c2;i++){
//             arr[idx++]=1;
//         }for(int i=0;i<c3;i++){
//             arr[idx++]=2;
//         }
//     }
// for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }

    
    
// }



#include<iostream>
#include <vector>
using namespace std;
int main(){
    int low=0,mid=0;
    vector<int> arr={1,0,0,2,1,2,0,1,0,1,0,1,0,1,1};
    int high=arr.size();
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
