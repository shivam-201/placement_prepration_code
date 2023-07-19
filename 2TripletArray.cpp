#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> triplet(vector<int> arr,int target){
    vector<vector<int>> result;
    sort(arr.begin(),arr.end());
    for(int i = 0;i<=arr.size()-3;i++){
        int remsum = target- arr[i];
        int j = i+1;
        int e = arr.size()-1;
         while(j<e){
               if(arr[j]+arr[e]==remsum){
                     result.push_back({arr[i],arr[j],arr[e]});
                     j++;
                     e--;
               }
               else if(arr[j] + arr[e]>remsum){
                e--;
               }
               else{
                j++;
               }

         }

    }
    return result;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,15};
    int target = 18;
    vector<vector<int>> ans = triplet(arr,target);
    for(int i = 0;i<ans.size();i++){
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}