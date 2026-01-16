// //suarray concept
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[]={1,2,3,4,5};
//     for(int st=0;st<n;st++){
//         for(int end=st;end<n;end++){
//             for(int i=st;i<=end;i++)
//             {
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
//max sum in subaaray
#include<climits>
#include<iostream>
#include<vector>
using namespace std;
int main(){

    int arr[]={3,-4,5,4,-1,7,-8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max_sum=INT_MIN;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        max_sum=max(max_sum,sum);
        if(sum<0){
            sum=0;
        }

    }
    cout<<max_sum;

}
