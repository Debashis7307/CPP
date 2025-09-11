#include<iostream>
using namespace std;
// implementation of Queue using Linked List
class Node{
public:
  int data;
  Node* next;
  Node(int d){
    data=d;
    next=NULL;
  }
};
class Queue{
public:
  Node* front;
  Node* rear;
  int size;
  Queue(){
    front=NULL;
    rear=NULL;
    size=0;
  }
  void push(int x){
    Node* newNode=new Node(x);
    if(rear==NULL){
      front=newNode;
      rear=newNode;
    } else {
      rear->next=newNode;
      rear=newNode;
    }
    size++;
  }
  void pop(){
    if(front==NULL){
      cout<<"Queue Underflow"<<endl;
      return;
    }
    Node* temp=front;
    front=front->next;
    if(front==NULL){
      rear=NULL;
    }
    delete temp;
    size--;
  }
  int getFront(){
    if(front==NULL){
      cout<<"Queue is empty"<<endl;
      return -1;
    }
    return front->data;
  }
  int getBack(){
    if(rear==NULL){
      cout<<"Queue is empty"<<endl;
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
  Queue q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  cout<<"Size of queue: "<<q.getSize()<<endl;
  cout<<"Front element: "<<q.getFront()<<endl;
  cout<<"Back element: "<<q.getBack()<<endl;
  q.pop();
  cout<<"Size of queue: "<<q.getSize()<<endl;
  cout<<"Front element: "<<q.getFront()<<endl;
  cout<<"Back element: "<<q.getBack()<<endl;
  return 0;
}