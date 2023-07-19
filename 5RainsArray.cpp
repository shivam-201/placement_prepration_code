#include<bits/stdc++.h>
using namespace std;
int trapingwater(vector<int> arr){
    int n = arr.size();
    if(n<=2){
        return 0;
    }
   vector<int>leftmax(n,0);
   vector<int>rightmax(n,0);
   leftmax[0] = arr[0];
   rightmax[n-1] = arr[n-1];
   for(int i = 1;i<n;i++){
      leftmax[i] = max(leftmax[i-1],arr[i]);
   }
   for(int i = n-2;i>=0;i--){
    rightmax[i] = max(rightmax[i+1],arr[i]);
   }
   int water = 0;
   for(int i = 0;i<n;i++){
     water+= (min(leftmax[i],rightmax[i]) - arr[i]);
   }
   return water;
}
int main(){
    vector<int> arr = {0,1,0,2,1,0,1,3,2,1,2,1};
          cout<<trapingwater(arr);
}