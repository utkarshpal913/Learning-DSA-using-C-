#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;

int main() {
    vector<int>arr;
    vector<vector<int>> mat={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}

    };
    int m=mat.size();
    int n=mat[0].size();
    int srow=0,erow=m-1;
    int scol=0,ecol=n-1;
    while(srow<=erow && scol<=ecol){
        //top
        for(int i=scol;i<=ecol;i++){
            arr.push_back(mat[srow][i]);
        }
         for(int i=srow+1;i<=erow;i++){
           // right
            arr.push_back(mat[i][ecol]);
        }
         for(int i=ecol-1;i>=scol;i--){
            //bottom
            if(srow==erow){
                break;
            }
            arr.push_back(mat[erow][i]);
        }
         for(int i=erow-1;i>=srow+1;i--){
            //left
            if(scol==ecol){
                break;
            }
            arr.push_back(mat[i][scol]);
        }
        srow++;
        erow--;
        scol++;
        ecol--;

    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}