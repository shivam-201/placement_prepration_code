#include<bits/stdc++.h>
using namespace std;
vector<int> subarraysort(vector<int> arr){
    int n = arr.size();
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int left = 0;
    int right = n-1;
    if(arr[0]>arr[1]){
        return {0,1};
    }
    if(arr[n-1]<arr[n-2]){
        return {n-2,n-1};
    }
    for(int i = 1;i<n-1;i++){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            largest = max(largest,arr[i]);
            smallest= min(smallest,arr[i]);
        }
        if(arr[i]<arr[i-1] && arr[i]<arr[i+1]){
            largest = max(largest,arr[i]);
            smallest = min(smallest,arr[i]);
        }

    }
    while(arr[left]<=smallest){
        left++;
    }
    while(arr[right]>=largest){
        right--;
    }
    return {left,right};
}
int main(){
    vector<int> arr = {1,2,3,4,5,9,11,10};
    vector<int> resu = subarraysort(arr);
    cout<<resu[0]<<" "<<resu[1]<<endl;
}