#include<bits/stdc++.h>
using namespace std;
int rotatedsearch(vector<int> arr,int k){
    int s = 0;
    int e = arr.size()-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]>=arr[s]){
              if(arr[mid]==k){
                return mid;
              }
              else if(k<arr[mid] && k>=arr[s]){
                e = mid-1;
               }
               else{
                 s = mid+1;
               }
        }
        else{
            if(arr[mid]==k){
                return mid;
            }
            else if(k>arr[mid] && k<=arr[e]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
    }
    
return -1;
}
int main(){
    vector<int> arr = {4,5,1,2,3};
    cout<<rotatedsearch(arr,5);
}