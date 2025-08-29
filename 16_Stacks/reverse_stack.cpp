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

int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);

  stack<int> gt;
  stack<int> rt;
  cout<<"Original Stack:"<<endl;
  printStack(st);
  cout<<"Top"<<st.top()<<endl;
  while(!st.empty()){
    gt.push(st.top());
    st.pop();
  }
  while(!gt.empty()){
    rt.push(gt.top());
    gt.pop();
  }
  
  while(!rt.empty()){
    st.push(rt.top());
    rt.pop();
  }
  cout<<"Reversed Stack:"<<endl;
  printStack(st);
  cout<<"Top"<<st.top()<<endl;
  return 0;
}