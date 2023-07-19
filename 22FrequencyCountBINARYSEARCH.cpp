#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> arr ,int ele){
    int start = 0;
    int end = arr.size()-1;
    int ans ;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==ele){
             ans = mid;
             end = mid-1;
        }
        else if(arr[mid]>ele){
            end = mid-1;
        }
        else{
            start = mid +1;
        }
    }
    return ans;
}
int upper_bound(vector<int> arr ,int ele){
    int start = 0;
    int end = arr.size()-1;
    int ans ;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==ele){
             ans = mid;
             start = mid+1;
        }
        else if(arr[mid]>ele){
            end = mid-1;
        }
        else{
            start = mid +1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {1,1,1,2,2,2,2,3,3,4};
    cout<< upper_bound(arr,2)-lower_bound(arr,2) +1 <<endl;
}