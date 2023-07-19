#include<bits/stdc++.h>
using namespace std;
int minswap(vector<int>arr){
    int n = arr.size();
    pair<int,int> ap[n];
    for(int i = 0;i<n;i++){
        ap[i].first = arr[i];
        ap[i].second = i;
    }
    sort(ap,ap+n);
    int ans = 0;
    vector<bool> visited(n,false);
    for(int i = 0;i<n;i++){
        int old_position = ap[i].second;
        int curr_idx = i;
        
        if(visited[i]==true && old_position == curr_idx){
            continue;
        }
            int node = i;
            int cycle = 0;
            while(!visited[node]){
                visited[node] = true;
                int next_node = ap[node].second;
                node = next_node;
                cycle+=1;
            }
        ans += (cycle-1);
    }
    return ans;
}
int main(){
    vector<int> arr = {10,11,5,4,3,2,1};
    cout<<minswap(arr);

}