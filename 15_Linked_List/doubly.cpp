#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;
  Node* pre;
  Node(int val){
    this->data=val;
    this->next=NULL;
    this->pre=NULL;
  }
};
void display(Node* head){
  while(head){
    cout<<head->data<<" ";
    head=head->next;
  }
  cout<<endl;
}
void reverseDisplay(Node* tail){
  while(tail){
    cout<<tail->data<<" ";
    tail=tail->pre;
  }
  cout<<endl;
}
int main(){
  Node* a=new Node(10);
  Node* b=new Node(20);
  Node* c=new Node(30);
  Node* d=new Node(40);
  a->next=b;
  b->next=c;
  b->pre=a;
  c->pre=b;
  c->next=d;
  d->pre=c;
  display(a);
  reverseDisplay(d);
  return 0;
}