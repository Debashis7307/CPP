#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> st){
  stack<int> temp;
  while(!st.empty()){
    temp.push(st.top());
    st.pop();
  }
  while(!temp.empty()){
    cout<<temp.top()<<" ";
    temp.pop();
  }
}

void push_at_buttom(stack<int>& st,int data){
  stack<int> temp;
  while(!st.empty()){
    temp.push(st.top());
    st.pop();
  }
  st.push(data);
  while(!temp.empty()){
    st.push(temp.top());
    temp.pop();
  }
}
void push_at_idx(stack<int>& st,int idx,int data){
  stack<int> temp;
  while(st.size()>idx){
    temp.push(st.top());
    st.pop();
  }
  st.push(data);
  while(!temp.empty()){
    st.push(temp.top());
    temp.pop();
  }
}
int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  printStack(st);
  push_at_buttom(st,0);
  cout<<endl;
  printStack(st);
  cout<<endl;
  push_at_idx(st,3,25);
  cout<<endl;
  printStack(st);
  return 0;
}