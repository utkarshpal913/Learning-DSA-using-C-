// // // // // // #include<iostream>
// // // // // // #include<vector>
// // // // // // #include<climits>
// // // // // // using namespace std;
// // // // // // int main(){
// // // // // //     int fans=0;
// // // // // //     int sum=0;
// // // // // //     int maxans=0;
// // // // // //      vector<int> vec={1,2,3,4,5};
// // // // // //      int n=5;
// // // // // //      for(int st=0; st<n; st++){
// // // // // //         for(int end=st; end<n; end++){
// // // // // //             sum+=vec[end];
// // // // // //             if(sum>maxans){
// // // // // //                 fans=sum;
// // // // // //             }
// // // // // //         }
// // // // // //      }
// // // // // //      cout<<fans;;
// // // // // // }
// // // // // #include<iostream>
// // // // // #include<vector>
// // // // // #include<climits>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int sum=0;
// // // // //     int maxans=INT_MIN;
// // // // //    vector<int> vec={-1,2,4,5,6,7,8,9,-12,23,34,-90,56,67,67};
// // // // //    int n=vec.size();
// // // // //    for(int i=0; i<n; i++){
// // // // //               sum+=vec[i];
// // // // //               maxans=max(maxans,sum);
// // // // //               if(sum<0){
// // // // //                 sum=0;
// // // // //               }
// // // // //    } 
// // // // //    cout<<maxans;
// // // // // }
// // // // #include<iostream>
// // // // #include<vector>
// // // // using namespace std;
// // // // int main(){
// // // //   vector<int> vec1={1,2,3,4,5,6,7,8,0};
// // // //   int target=11;
// // // //   int size=vec1.size();
// // // //   for(int i=0;i<size;i++){
// // // //     for(int j=0; j<i+1; j++){
// // // //       if(vec1[i]+vec1[j]==target){
// // // //         cout<<"("<<i<<",";
// // // //         cout<<j<<")";
// // // //         cout<<endl;
// // // //       }
// // // //     }
// // // //   }

  
// // // // }
// // // #include<iostream>
// // // #include<vector>
// // // using namespace std;
// // // int main(){
// // //     int target=9;
// // //     vector<int> new_vec;
// // //     vector<int> vec={1,2,3,4,5,6,7,8,9,0};
// // //     int n=vec.size();
// // //     int i=0,j=n-1;
// // //     while(j>i){
// // //         int sum=vec[i]+vec[j];
// // //         if(sum>target){
// // //             j--;
// // //         }
// // //         else if(sum<target){
// // //             i++;
// // //         }
// // //         else{
// // //            new_vec.push_back(i);
// // //            new_vec.push_back(j);
// // //            break;
// // //         }
// // //     }
// // //     for(int i=0;i<new_vec.size();i++){
// // //         cout<<new_vec[i]<<endl;
// // //     }
// // // }
// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // int main(){
// //     int count=0;
// //     vector<int> vec={1,1,1,1,1,1,1,1,1,2,3,4,5,6,87,8,7};
// //     int n=vec.size();
// //     int target;
// //     cout<<"enter the targeted element"<<endl;
// //     cin>>target;
// //     for(int i=0;i<n;i++){
// //         if(target==vec[i]){
// //             count++;
// //         }
// //     }
// //     if(count>n/2){
// //         cout<<"the element "<<target<<" is mostly present in this array"<<endl;
// //     }
// //     else{
// //         cout<<"the element "<<target<<" is only preent few times in array"<<endl;
// //     }
// // }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={1,2,1,2,2,1,2,11,1,1,1,1,1,1,1};
//     int freq=0,ans=0;
//     for(int i=0; i<vec.size();i++){
//         if(freq==0){
//             ans=vec[i];
//         }
//         if(freq==vec[i]){
//             freq++;
//         }
//         else{
//             freq--;
//         }
//     }
//     cout<<ans;
// }
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int high_value;
    int low_value;
    
    vector<int> price={7,1,3,4,5,6,7,8,5,3,23,3,3,34,4,3,23,3,4,56};
    int n=price.size();
    int buy=price[0],profit=0;
    for(int i=0;i<n;i++){
        if(price[i]>buy){
            profit=max(profit,price[i]-buy);
            high_value=price[i];
            
        }
        buy=min(price[i],buy);
        low_value=buy;
    }
    cout<<profit<<endl<<high_value<<endl<<low_value;
}