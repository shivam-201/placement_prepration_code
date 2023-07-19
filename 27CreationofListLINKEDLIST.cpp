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
void insertinmiddle(node*&head,int data,int pos){
    if(pos==0){
        insertathead(head,data);
        return;
    }
    node*temp=head;
    for(int jump = 1;jump<=pos-1;jump++){
          temp=temp->next;
    }
    node*n = new node(data);
    n->next= temp->next;
    temp->next=n;
}
node* reverselist(node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node*shead = reverselist(head->next);
    head->next->next = head;
    head->next = NULL;
    return shead;
}
void reverseiterative(node*&root){
    node*prev = NULL;
    node*current = root;
    node*temp;
    while(current!=NULL){
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }

    root = prev;
}


void printlist(node*&head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    node*head = NULL;
    insertathead(head,1);
    insertathead(head,2);
    insertathead(head,3);
    insertathead(head,4);
    printlist(head);
    insertinmiddle(head,5,2);
    printlist(head);
    node*root=reverselist(head);
    printlist(root);
    // insertathead(root,6);
    // printlist(root);
    // reverseiterative(root);
    // printlist(root);
  // root =  reversek(root,3);
    printlist(root);
    
} 