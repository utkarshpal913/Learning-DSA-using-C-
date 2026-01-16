#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;

int main() {
    //reverse a number
    int n=243;
    int rev_num=0;
    while(n!=0){
        int ldig=n%10;
        rev_num=ldig+rev_num*10;
        n=n/10;
        

    }
    cout<<rev_num;

    return 0;
}