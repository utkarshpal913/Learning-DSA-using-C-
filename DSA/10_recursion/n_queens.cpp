#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;
void placingqueens(vector<vector<int>>board, int row,vector<vector<int>>ans,int n){
    if(row==n){
        ans.push_back({board});
        return;
    }
    for(int i=0;i<n;i++){
        if(isSafe()){
            board[row][i]='Q';
            placingqueens(board,row+1,ans,n);
            board[row][i]='.';

        }
    }
}

int main() {
    
    return 0;
}