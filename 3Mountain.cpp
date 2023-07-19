#include<bits/stdc++.h>
using namespace std;
int longestmountain(vector<int>arr){
    
    int maxcnt = 0;
    for(int i = 1;i<=arr.size()-1;i++){
        int cnt = 1;
       if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
        int j = i;
         while( j>=1  && arr[j-1]<arr[j]){
            cnt++;
            j--;
         }
         while(i<arr.size()-1 && arr[i]>arr[i+1]){
            cnt++;
            i++;
         }
       }
       maxcnt = max(maxcnt,cnt);
    }
    return maxcnt;
}
int main(){
    vector<int> arr = {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    cout<<longestmountain(arr);
}