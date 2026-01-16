#include <iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>
//#include<>
using namespace std;

int main() {
     vector<vector<int>>arr = {{9,1,7},{8,9,2},{3,4,6}};
     unordered_set<int>s;
     vector<int>ans;

     int a,b;//repeated element
     int actual_Sum=0;
    
     int n=arr.size();
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            actual_Sum+=arr[i][j];
            if(s.find(arr[i][j])!=s.end()){
                a=arr[i][j];
                
            }
            else{
            s.insert(arr[i][j]);
            }
            

        }
        
    }
        int total=n*n;
        int exposum=total*(total+1)/2;
        b=exposum+a-actual_Sum;
        ans.push_back(a);
        ans.push_back(b);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}