// ////brute force
// #include <iostream>
// #include<algorithm>
// #include<vector>
// //#include<>
// using namespace std;

// int main() {
//     int a;
//     int b;
//     bool check=false;
//     int target=9;
//     vector<int> arr={5,2,11,7,15};
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//              if(target==arr[i]+arr[j]){
//              check=true;
//              a=i;
//              b=j;
//              break;
//              }
//         }
//         // if(check){
//         //     break;
//         // }
//     }
//     if(check){
//         cout<<a;
//         cout<<b;
//     }
    
//     return 0;
// }
///////////////////optimized way///////////////////////////////////////////////////
// #include <iostream>
// #include<algorithm>
// #include<vector>
// //#include<>
// using namespace std;

// int main() {
//     int a,b;
//     int target=9;
//     vector<int> arr={5,2,11,7,15};
//     sort(arr.begin(),arr.end());
//     int n=arr.size();
//     int st=0,end=n-1;
//     while(st<end){
//         int sum=arr[st]+arr[end];
//         if(sum==target){
//           a=st,b=end;
//           break;
//         }
//         if(target>sum){
//             st++;
//         }
//         else{
//             end--;
//         }
//     }
   
//     return 0;
// }
////////////////////hashing way////////////////////////////////////////////////
#include <iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<utility>
using namespace std;

int main() {
    pair<int,int>ans;
    vector<int> arr={5,2,11,7,15};
    int target=9;
    unordered_map<int,int>comp;
    for(int i=0;i<arr.size();i++){
        int first=arr[i];
        int second=target-first;
        if(comp.find(second)!=comp.end()){
              ans=make_pair(comp[second],i);   
        }
        comp[first]=i;
    }
    cout<<ans.first<<" "<<ans.second;

    return 0;
}