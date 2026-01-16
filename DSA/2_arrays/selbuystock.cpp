#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> price={7,1,5,3,6,4};
int maxprofit=0;
int bestbuy=price[0];
for(int i=0;i<price.size();i++){
    if(price[i]>bestbuy){
        maxprofit=max(maxprofit,price[i]-bestbuy);
    }
    bestbuy=min(bestbuy,price[i]);
  }
  cout<<maxprofit;

}