#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;
void printnums(int n){
    ///base code
    if(n==1){
        cout<<"1";
        return;
    }
    //printing of elements
    cout<<n<<endl;
    //recursion
    printnums(n-1);
}

int main() {
    printnums(10);
    
    return 0;
}