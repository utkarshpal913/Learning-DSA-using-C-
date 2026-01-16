#include <iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

int max_sum(int arr[4][3]){
    int max_sum=INT_MIN;
    
     for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<3;j++){
             sum+=arr[i][j];
        }
        max_sum=max(sum,max_sum);
     }
     return max_sum;
}
int main() {
    int arr[4][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}};
    cout<<max_sum(arr);

    
    return 0;
}