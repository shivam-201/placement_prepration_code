#include<bits/stdc++.h>
using namespace std;
vector<int> pairsum(vector<int> arr,int sum){
    unordered_set<int> us;
    for(int i = 0;i<arr.size();i++){
        int remsum = sum - arr[i];
        if(us.find(remsum)!=us.end()){
            return {arr[i],remsum};
        }
        else{
            us.insert(arr[i]);
        }
    }
    return {-1,-1};
}
int main(){
    vector<int> arr = {10,5,2,3,-6,9,11};
    vector<int> result =  pairsum(arr,6);
    cout<<result[0]<<" "<<result[1]<<endl;
}