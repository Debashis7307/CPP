#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void Display(queue<int>& q){
  for(int i=0;i<q.size();i++){
    int x=q.front();
    cout<<x<<" ";
    q.pop();
    q.push(x);
  }
  cout<<endl;
}
void Reverse(queue<int>& q){
  stack<int> st;
  while(!q.empty()){
    st.push(q.front());
    q.pop();
  }
  while(!st.empty()){
    q.push(st.top());
    st.pop();
  }
}
void RemoveEven(queue<int>& q){
  int n=q.size();
  for(int i=0;i<n;i++){
    int x=q.front();
    q.pop();
    if(i%2!= 0){
      q.push(x);
    }
  }
}
int main(){
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  cout<<"Size of queue: "<<q.size()<<endl;
  cout<<"Front element: "<<q.front()<<endl;
  cout<<"Back element: "<<q.back()<<endl;
  Display(q);
  Reverse(q);
  Display(q);
  Reverse(q);
  RemoveEven(q);
  Display(q);
  return 0;
}