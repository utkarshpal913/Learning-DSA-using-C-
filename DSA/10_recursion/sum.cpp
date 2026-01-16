#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;
int sum(int n){
    if(n==-1){
        return 0;
    }
    return n+sum(n-1);
}

int main() {
    cout<<sum(10);
    
    return 0;
}