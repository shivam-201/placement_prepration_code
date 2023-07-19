#include<bits/stdc++.h>
using namespace std;
int basenum(int n){
    int ans = 0;
    int s = 0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        
    }
    return ans;
}
float sqrtval(int n,int p){
    float base = basenum(n);
    float inc = 0.1;
    for(int i = 1;i<=p;i++){
          while(base*base<=n){
            base+=inc;
          }
          base = base - inc;
          inc = inc/10.0;
    }
    return base;
}
int main(){
    int n;
     cin>>n ;
     cout<<sqrtval(n,3);
}