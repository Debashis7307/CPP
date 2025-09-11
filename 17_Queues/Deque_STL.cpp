#include<iostream>
#include<deque>
using namespace std;

int main(){
  deque<int> dq;
  dq.push_back(10);
  dq.push_back(20);
  dq.push_front(5);
  dq.push_front(1);
  cout<<"Front element: "<<dq.front()<<endl; // 1
  cout<<"Back element: "<<dq.back()<<endl;   // 20
  cout<<"Size: "<<dq.size()<<endl;           // 4
  dq.pop_front();
  cout<<"Front element after pop: "<<dq.front()<<endl; // 5
  dq.pop_back();
  cout<<"Back element after pop: "<<dq.back()<<endl;   // 10
  return 0;
}