#include <iostream>
#include<algorithm>
#include<vector>
//#include<>
using namespace std;

int main() {
    vector<vector<int>>ans;
    vector<int> arr={1,0,-1,0,-2,2};
    sort(arr.begin(),arr.end());
    int target=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(j>i+1 && arr[j]==arr[j-1]){
            continue;
        }

            int k=j+1;
            int l=n-1;
            while(k<l){
                
                int sum=arr[i]+arr[j]+arr[k]+arr[l];
                if(sum==target){
                    vector<int>quad={arr[i],arr[j],arr[k],arr[l]};
                    ans.push_back(quad);
                    k++;
                    l--;
                    while (k < l && arr[k] == arr[k - 1]) k++;
                    while (k < l && arr[l] == arr[l + 1]) l--;
                }
                
                else if(sum>target){
                    l--;
                }
                else{
                    k++;
                }
                
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}