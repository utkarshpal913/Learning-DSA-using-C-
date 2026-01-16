// //////////////////////////----normal way----------///////////////////////////////
// #include <iostream>
// #include<algorithm>
// #include<vector>
// //#include<>
// using namespace std;

// int main() {
//     vector<int>arr={9,4,0,20,3,10,5};
//     int n=arr.size();
//     int k=33;//target to find;
//     int count=0;
//     for(int i=0;i<n;i++){
//         int sum=0;
//          for(int j=i+1;j<n;j++){
//             sum+=arr[j];
//             if(sum==k){
//                 count++;
//             }

//          }
         
//     }
//     cout<<count;
//     return 0;
// }

/////////////////////////////----optimized way----------///////////////////////////
#include <iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    ////making of preffix sum vector;;;
    vector<int>arr={9,4,0,20,3,10,5};
    int n=arr.size();
    vector<int>ps(n,0);
    ps[0]=arr[0];
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+arr[i];
    }
    ///finding no of subaarays present in the array which is equal to k
    int k=3;
    unordered_map<int,int>m;
    int count=0;
    for(int i=0;i<n;i++){
        if(ps[i]==k){
            count++;
        }
        int val=ps[i]-k;
        if(m.find(val)!=m.end()){
            count+=m[val];
        }
        if(m.find(val)==m.end()){
            m[ps[i]]=0;
        }
        m[ps[i]]++;

    }
    cout<<count;

    return 0;
}