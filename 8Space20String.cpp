#include<bits/stdc++.h>
using namespace std;
void space20(char strings[]){
    int spaces = 0;
    int len = strlen(strings);
    for(int i = 0;i!='\0';i++){
        if(strings[i]==' '){
            spaces+=1;
        }
    }
    int idx = 2*spaces + len; 
     strings[idx] = '\0';
     for(int i = len-1 ;i>=0;i--){
}
     }

int main(){
    char strings[100] = "hello world, how are you";
    space20(strings);
    cout<<strings;
}