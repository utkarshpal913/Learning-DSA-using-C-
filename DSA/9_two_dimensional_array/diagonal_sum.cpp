////1st logic
#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;
int diagonal_sum(int arr[3][3],int row,int col){
    int sum=0;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                sum+=arr[i][j];
            }
            else if(j==row-i-1){
                sum+=arr[i][j];
            }
        }
     }
     return sum;

}
// int main() {
//     int arr[3][3] = {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9},
    
// };
// int row=3,col=3;
// cout<<diagonal_sum(arr,row,col);
//     return 0;
// }
////////////2nd logic///////////////////
#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;
int diagonal_sum(int arr[3][3],int row,int col){
    int sum=0;
     for(int i=0;i<row;i++){
        sum+=arr[i][i];
        if(i!=row-i-1){
               sum+=arr[i][row-i-1];
        }
     }
     return sum;

}
int main() {
    int arr[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    
};
int row=3,col=3;
cout<<diagonal_sum(arr,row,col);
    return 0;
}