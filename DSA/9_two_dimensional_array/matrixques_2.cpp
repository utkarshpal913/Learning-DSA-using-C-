#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;

int main() {
    bool a=false;
    int  target=100;
    vector<vector<int>> mat={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int m=mat.size(); //row size
    int n=mat[0].size();
    int row=0,col=n-1;
    while( col>=0 && row<m ){
        if(target== mat[row][col]){
              a=true;
              break;
        }
        else if(target<mat[row][col]){
            col--;
        }
        else{
            row++;
        }
    }
    if(a){
        cout<<"element foud";
    }
    return 0;
}