#include<iostream>
using namespace std;

class Node{
public:
  int val;
  Node* next;
  Node(int val){
    this->val=val;
    this ->next =NULL;
  }
};

void Display(Node* head){
  Node* temp =head;
  while(temp != NULL){
    cout<<temp->val<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
void DisplayR(Node* head){
  if(head==NULL) return;
  cout<<head->val<<" ";
  DisplayR(head->next);
}
int size(Node* head){
  int count=0;
  Node* temp=head;
  while(temp!=NULL){
    count++;
    temp = temp->next;
  }
  return count;
}
int main(){
  // Node a(10), b(20), c(30), d(40);
  // a.next = &b;
  // b.next = &c;
  // c.next = &d;
  // // cout<<a.next->next->val;
  // Node temp=a;
  // while(1){
  //   cout<<temp.val<<" ";
  //   if(temp.next==NULL) break;
  //   temp=*temp.next; // dereferencing the pointer to get the next node
  // }

  Node* a= new Node(10);
  Node* b= new Node(20);
  Node* c= new Node(30);
  Node* d= new Node(40);
  a->next = b;
  b->next = c;
  c->next = d;
  DisplayR(a);
  cout<<"Size of linked list: "<<size(a)<<endl;
  return 0;
}
