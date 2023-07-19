#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node*next;
  node(int data){
    this->data = data;
    next = NULL;
  }
};
void insertathead(node*&head,int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    node*n = new node(data);
    n->next = head;
    head = n;
}
void printlist(node*&head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
node*reversek(node*root,int k){
    if(root==NULL){
        return NULL;
    }
    node*prev = NULL;
    node*current = root;
    node*temp;
    int cnt = 1;
    while(current!=NULL && cnt<=k){
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
        cnt++;
    }
    if(temp!=NULL){
        root->next = reversek(temp,k);
    }
    return prev;
}
int main(){
    node*head = NULL;
    insertathead(head,1);
    insertathead(head,2);
    insertathead(head,3);
    insertathead(head,4);
        insertathead(head,5);

    printlist(head);
    head = reversek(head,3);
    printlist(head);
}