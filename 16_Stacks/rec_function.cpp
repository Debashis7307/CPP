#include<iostream>
#include<stack>
using namespace std;

void displayrec(stack<int> st){
  if(st.empty()) return;
  int top=st.top();
  // cout<<top<<" "; //reverse order
  st.pop();
  displayrec(st);
  cout<<top<<" ";//normal oder
  st.push(top);
}
void push_at_bottom(stack<int>& st,int data){
  if(st.empty()){
    st.push(data);
    return;
  }
  int top=st.top();
  st.pop();
  push_at_bottom(st,data);
  st.push(top);
}
void reverse(stack<int>& st){
  if(st.empty()) return;
  int top=st.top();
  st.pop();
  reverse(st);
  push_at_bottom(st,top);
}
int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  displayrec(st);
  reverse(st);
  cout<<endl;
  displayrec(st);
  return 0;
}