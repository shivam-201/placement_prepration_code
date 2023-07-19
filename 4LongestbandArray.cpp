#include<bits/stdc++.h>
using namespace std;
int longestband(vector<int>arr){
    int maxlen = 0;
    unordered_set<int> us;
    for(auto x : arr){
        us.insert(x);
    }
    for(auto x : us){
        int parent = x-1;
        int cnt = 1;
        if(us.find(parent)==us.end()){
            int child = x +1;
            while(us.find(child)!=us.end()){
                cnt++;
                child = child +1;
            }
        }
        maxlen = max(maxlen,cnt);
    }
    return maxlen;
}
int main(){
    vector<int> arr = {9,1,4,7,3,-1,0,5,8,-1,6};
    cout<<longestband(arr);
}