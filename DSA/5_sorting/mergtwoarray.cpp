//---------Brute Force------------------------------------------
// //merging of two arrays into another array
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> a={1,2,3};
//     vector<int> b={4,5,6};
//     int m=a.size();
//     int n=b.size();
//     vector<int>c;
//     int i=0,j=0;
//     while(i<m && j<n){
//         if(a[i]<b[j]){
//             c.push_back(a[i]);
//             i++;
//         }
//         else{
//             c.push_back(b[j]);
//             j++;
//         }

//     }
//     while(i<m){
//         c.push_back(a[i]);
//         i++;
//     }
//     while(j<n){
//         c.push_back(b[j]);
//         j++;
//     }
//     for(int i=0;i<m+n;i++){
//         cout<<c[i]<<" ";
//     }
    

// }
//-------------optimized way--------------------------------------
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a={1,2,3,4,5,6,0,0,0};
    int m=6;
    vector<int> b={2,5,6};
    int n=3;
    int idx=a.size()-1;
    int i=m-1,j=n-1;
    while(i>=0 && j>=0 ){
        if(a[i]<b[j]){
            a[idx]=b[j];
            idx--;
            j--;

        }
        else{
            a[idx]=a[i];
            idx--;
            i--;
        }

    }
    while(j>=0){
        a[idx]=b[j];
        idx--;
        j--;
    }
for(int i=0;i<m+n;i++){
      cout<<a[i]<<" ";
     }


}