#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l={1,2,3,4,5,6,7,8,9,0};
    l.push_back(1);
    l.push_front(2);
     cout<<endl;
     cout<<l.size();
     cout<<endl;
     l.clear();
         for(int i:l){
        cout<<i<<" ";
    }


}