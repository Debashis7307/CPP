#include<iostream>
using namespace std;

class Node{  // user define data type 
public:
  int val;
  Node* next;
  Node(int val){
    this->val=val;
    this->next=NULL;
  }
};

class LinkedList{  // user define data structure
public:
  Node* head;
  Node* tail;
  int size;

  LinkedList(){  // constructor to initialize the linked list
    head=NULL;
    tail=NULL;
    size=0;
  }

  void insertAtEnd(int val){   // insert at end
    Node* newNode = new Node(val);
    if(head==NULL) head=tail=newNode;
    else{
      tail->next=newNode;
      tail=newNode;
    }
    size++;
  }
  void insertAtHead(int val){   // insert at head
    Node* newNode = new Node(val);
    if(head==NULL) head=tail=newNode;
    else{
      newNode->next=head;
      head=newNode;
    }
    size++;
  }
  void insertAt(int idx,int val){   // insert at index
    if(idx<0 || idx>size) cout<<"Invalid size"<<endl;
    else if(idx==0) insertAtHead(val);
    else if(idx==size) insertAtEnd(val);
    else{
      Node* newNode = new Node(val);
      Node* temp=head;
      for(int i=0;i<idx-1;i++) temp=temp->next;
      newNode->next=temp->next;
      temp->next=newNode;
      size++;
    }
  }

  int getEleAt(int idx){   // get element at index
    if(idx<0 || idx>size) {
      cout<<"Invalid Size";
      return -1;
    }
    else if(idx==0) return head->val;
    else if(idx==size-1) return tail->val;
    else{
      Node* temp=head;
      for(int i=1;i<=idx;i++) temp=temp->next;
      return temp->val;
    }
  }

  void deletAtHead(){  // delete at head
    if(head==0) return;
    head=head->next;
    size--;
  }
  void deletAtTail(){  // delete at tail
    if(tail==0) return;
    Node* temp=head;
    while(temp->next!=tail) temp=temp->next;
    delete tail;
    tail=temp;
    tail->next=NULL;
    size--;
  }
  void deletAt(int idx){   // delete at index
    if(idx<0 || idx>=size) cout<<"Invalid Size"<<endl;
    else if(idx==0) deletAtHead();
    else if(idx==size-1) deletAtTail();
    else{
      Node* temp=head;
      for(int i=0;i<idx-1;i++) temp=temp->next;
      temp->next=temp->next->next;
      size--;
    }
  }

  void Display(){   // display the linked list
    Node* temp=head;
    while(temp!=NULL){
      cout<<temp->val<<" ";
      temp=temp->next;
    }
    cout<<endl;
  }
};

int main(){
  LinkedList ll;
  ll.insertAtEnd(10);
  ll.insertAtEnd(20);
  ll.Display();
  ll.insertAtEnd(30);
  ll.Display();
  cout<<ll.size<<endl;
  ll.insertAtHead(5);
  ll.insertAt(2,15);
  ll.Display();
  cout<<ll.getEleAt(3)<<endl;
  ll.deletAtHead();
  ll.Display();
  ll.deletAtTail();
  ll.Display();
  ll.deletAt(1);
  ll.Display();
  return 0;
}