#include<iostream>
#include<queue>
using namespace std;

class Queue{
public:
  int* arr;
  int front;
  int rear;
  int size;
  Queue(int s){
    size=s;
    arr=new int[size];
    front=0;
    rear=0;
  }
  void push(int x){
    if(rear==size){
      cout<<"Queue Overflow"<<endl;
      return;
    }
    arr[rear]=x;
    rear++;
  }
  void pop(){
    if(front==rear){
      cout<<"Queue Underflow"<<endl;
      return;
    }
    front++;
  }
  int getFront(){
    if(front==rear){
      cout<<"Queue is empty"<<endl;
      return -1;
    }
    return arr[front];
  }
  int getBack(){
    if(front==rear){
      cout<<"Queue is empty"<<endl;
      return -1;
    }
    return arr[rear-1];
  }
  int getSize(){
    return rear-front;
  }
  bool isEmpty(){
    return front==rear;
  }
};

int main(){
  Queue q(5);
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
  q.pop();
  cout<<"Size of queue: "<<q.getSize()<<endl;
  cout<<"Front element: "<<q.getFront()<<endl;
  cout<<"Back element: "<<q.getBack()<<endl;
  return 0;
}