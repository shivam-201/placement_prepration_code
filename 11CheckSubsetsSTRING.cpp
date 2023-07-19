#include<bits/stdc++.h>
using namespace std;
bool checksubssets(string word,string wordl,int i,int j){
    if(j==-1){
        return true;
    }
    if(i==-1 && j!=-1){
        return false;
    }
    if(word[i]==wordl[j]){
        return checksubssets(word,wordl,i-1,j-1);
    }
    if(word[i]!=wordl[j]){
        return checksubssets(word,wordl,i-1,j);
    }
}
int main(){
    string word = "codingminutes";
    string wordl = "aines";
    cout<<checksubssets(word,wordl,word.size()-1,wordl.size()-1);
}