#include<bits/stdc++.h>
using namespace std;
void housingsize(vector<int> house,int k){
    
    int i = 0;
    int j = 0;
    int ans  = 0;
    while(j<=house.size()-1 ){
         ans += house[j++];

         while(ans>k && i<j){
            ans -= house[i];
            i++;
         }
                     if(ans==k){
               cout<<i<<" "<<j-1<<endl;
           }

    }
}
int main(){
    vector<int> house = {1,3,2,1,4,1,3,2,1,1,2};
    housingsize(house,8);
}