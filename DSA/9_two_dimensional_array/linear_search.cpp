#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;
bool linear_search(int arr[4][3],long long target){
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return true;
            }
           
        }
    }
    return false;
}

int main() {
    int arr[4][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}
};
long long target=10000000000;
if(linear_search(arr,target)){
    cout<<"found";
}
else{
    cout<<"not found";
}

    return 0;
}