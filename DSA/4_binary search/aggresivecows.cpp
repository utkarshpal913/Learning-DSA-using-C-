// #include<iostream>
// #include<vector>
// using namespace std;
// bool isPossible(vector<int>arr,int m,int n ,int mindistance){
//     int cows=1,pos=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>mindistance){
//             return false;
//         }
//         if(pos+arr[i]<=mindistance){
//             pos+=arr[i];
//         }
//         else{
//             cows++;
//             pos=arr[i];
//         }
//     }
//     return cows>m?false:true;

// }
// int largest_distance(vector<int>arr,int m,int n){
//     if(m>n){
//         return -1;
//     }
//     int start=1;//for max distance positions of stalls starts from 1
//     int highest_position=0;//maximum of arr-starting position
//     for(int i=0;i<n;i++){
//          highest_position=max(highest_position,arr[i]);
//     }
//     int end=highest_position-start;
//     int ans=0;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(isPossible(arr,m,n,mid)){
//             ans=mid;
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }

//     }
//     return ans;
// }
// int main(){
//     vector<int>arr={1,2,8,4,9};
//     int m=3,n=5;
//     cout<<largest_distance(arr,m,n);

// }
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int>& arr, int m, int n, int minDist) {
    int cows = 1;
    int lastPos = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] - lastPos >= minDist) {
            cows++;
            lastPos = arr[i];
        }
        if (cows == m) {
            return true;
        }
    }
    return false;
}

int largest_distance(vector<int>& arr, int m, int n) {
    if (m > n) return -1;

    sort(arr.begin(), arr.end());

    int start = 0;
    int end = arr[n - 1] - arr[0];
    int ans = 0;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, m, n, mid)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 8, 4, 9};
    int m = 3;
    int n = arr.size();

    cout << largest_distance(arr, m, n);
}
