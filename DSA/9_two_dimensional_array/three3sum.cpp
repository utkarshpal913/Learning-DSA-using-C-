// #include <iostream>
// #include<algorithm>
// #include<vector>
// #include<set>
// using namespace std;

// int main() {
//     vector<int>arr={-1,0,1,2,-1,4};
//     int n=arr.size();
//     vector<vector<int>>ans;
//     set<vector<int>>s;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 if(arr[i]+arr[j]+arr[k]==0){
//                     vector<int>trip={arr[i],arr[j],arr[k]};
//                     sort(trip.begin(),trip.end());
//                     if(s.find(trip)==s.end()){
//                            s.insert(trip);
//                            ans.push_back(trip);
//                     }

//                 }
//             }
//         }
//     }
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<3;j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
////////////////////////////////////////Better approach//////////////////////////////////
// #include <iostream>
// #include<algorithm>
// #include<vector>
// #include<set>
// using namespace std;

// int main() {
//     vector<vector<int>>ans;
//     set<vector<int>>unique_set;
//     vector<int>arr={-1,0,1,2,-1,4};
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         int targ=-arr[i];
//         set<int>s;
//         for(int j=i+1;j<n;j++){
//             int third=targ-arr[j];
//             if(s.find(third)!=s.end()){
//                   vector<int>trip={arr[i],arr[j],third};
//                   sort(trip.begin(),trip.end());
//                   if (unique_set.find(trip) == unique_set.end()) {
//                         unique_set.insert(trip);
//                         ans.push_back(trip);
//                             }

 
//             }
//             s.insert(arr[j]);
            
//         }
//     }
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<3;j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
//     return 0;
// }

////////////////////////////////Two Pointer Approach///////////////////////////
#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main() {
    set<vector<int>>s;
    vector<vector<int>>ans;


    vector<int>arr={-1,0,1,2,-1,4};
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        int j=i+1;
        int k=n-1;
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if(sum==0){
                vector<int>trip={arr[i],arr[j],arr[k]};
                sort(trip.begin(),trip.end());
                if(s.find(trip)==s.end()){
                    s.insert(trip);
                    ans.push_back(trip);

                }
                j++,k--;

            } 
            else if(sum<0){
                j++;
            }
            else{
                k--;
            }
            
            // if(j<k && arr[j]==arr[j-1]){
            //     j++;
            // }
            
            
        }


    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}