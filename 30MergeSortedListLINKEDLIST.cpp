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
node*mergelist(node*a,node*b){
if(a==NULL){
    return b;
}
if(b==NULL){
    return a;
}
node*c;
if(a->data<b->data){
    c= a;
    c->next = mergelist(a->next,b);
}
else{
    c = b;
    c->next = mergelist(a,b->next);
}
return c;
}
int main(){
    node*head = NULL;
    node*head2 = NULL;
    insertathead(head,4);
    insertathead(head,2);
    insertathead(head,1);
    insertathead(head2,3);
    printlist(head);
    printlist(head2);
    node* root = mergelist(head,head2);
    printlist(root);
}