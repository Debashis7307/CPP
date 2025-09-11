#include<iostream>
using namespace std;
// implementation of Deque using Doubly Linked List
class Node{
public:
  int data;
  Node* next;
  Node* prev;
  Node(int d){
    data=d;
    next=NULL;
    prev=NULL;
  }
};
class Deque{
public:
  Node* front;
  Node* rear;
  int size;
  Deque(){
    front=NULL;
    rear=NULL;
    size=0;
  }
  void pushFront(int x){
    Node* newNode=new Node(x);
    if(front==NULL){
      front=newNode;
      rear=newNode;
    } else {
      newNode->next=front;
      front->prev=newNode;
      front=newNode;
    }
    size++;
  }
  void pushRear(int x){
    Node* newNode=new Node(x);
    if(rear==NULL){
      front=newNode;
      rear=newNode;
    } else {
      rear->next=newNode;
      newNode->prev=rear;
      rear=newNode;
    }
    size++;
  }
  void popFront(){
    if(front==NULL){
      cout<<"Deque Underflow"<<endl;
      return;
    }
    Node* temp=front;
    front=front->next;
    if(front==NULL){
      rear=NULL;
    } else {
      front->prev=NULL;
    }
    delete temp;
    size--;
  }
  void popRear(){
    if(rear==NULL){
      cout<<"Deque Underflow"<<endl;
      return;
    }
    Node* temp=rear;
    rear=rear->prev;
    if(rear==NULL){
      front=NULL;
    } else {
      rear->next=NULL;
    }
    delete temp;
    size--;
  }
  int getFront(){
    if(front==NULL){
      cout<<"Deque is empty"<<endl;
      return -1;
    }
    return front->data;
  }
  int getBack(){
    if(rear==NULL){
      cout<<"Deque is empty"<<endl;
      return -1;
    }
    return rear->data;
  }
  int getSize(){
    return size;
  }
  bool isEmpty(){
    return size==0;
  }
};

int main(){
  Deque dq;
  dq.pushRear(10);
  dq.pushRear(20);
  dq.pushFront(5);
  cout<<"Size of deque: "<<dq.getSize()<<endl;
  cout<<"Front element: "<<dq.getFront()<<endl;
  cout<<"Back element: "<<dq.getBack()<<endl;
  dq.popFront();
  cout<<"Size of deque: "<<dq.getSize()<<endl;
  cout<<"Front element: "<<dq.getFront()<<endl;
  dq.popRear();
  cout<<"Size of deque: "<<dq.getSize()<<endl;
  cout<<"Back element: "<<dq.getBack()<<endl;
  return 0;
}