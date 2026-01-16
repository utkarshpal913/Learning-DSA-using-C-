#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;

int main() {
    //digits in a number
    int count=0;
    int n=153;
    int temp=n;
    while(temp!=0){
        int ldig=temp%10;
        count+=(ldig*ldig*ldig);
        temp=temp/10;
        
    }
    if(count==n){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
    
    return 0;
}