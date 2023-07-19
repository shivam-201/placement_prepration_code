#include<bits/stdc++.h>
using namespace std;
string windowlen(string word,string pattern){
    unordered_map<char,int> mp;
    unordered_map<char,int> mw;
    int cnt = 0;
    int start = 0;
    int start_idx = -1;
    int min_so_far = INT_MAX;
    int window_size ;
    for(int i = 0;i<pattern.length();i++){
        mp[pattern[i]]++;
    }
    for(int i = 0;i<word.length();i++){  // expand the window by including the current character
        char ch = word[i];
        mw[ch]++; // count how many character have been matched till now
        if(mp[ch]!=0 && mw[ch]<=mp[ch]){
            cnt+=1;
        }// if all the characters are found in the current window then you can start contracting
        if(cnt==pattern.length()){// strat removing the characters from left to remove unwanted charcters(not present or frequcy is higher then required)
            while(mp[word[start]]==0 || mw[word[start]]>mp[word[start]]){
                      mw[word[start]]--;
                      start++; }
             window_size = i-start +1;
            if(window_size<min_so_far){
                min_so_far = window_size;
                start_idx = start;
            }
        }
        
    }
    if(start_idx==-1){
        return "no window found";
    }
    return word.substr(start_idx,min_so_far);
}
int main(){
    string word = "helloworldelo";
    string pattern = "elo";
    cout<<windowlen(word,pattern);
}