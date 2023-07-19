#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    getline(cin,word);
    stringstream ss(word);
    string token;
    vector<string> tokens;
    // while(getline(ss,token,' ')){
    //     tokens.push_back(token);
    // }
    while(ss>>word){
        tokens.push_back(word);
    }
    for(auto x :tokens){
        cout<<x<<",";
    }
}