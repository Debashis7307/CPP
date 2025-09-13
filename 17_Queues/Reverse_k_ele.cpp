#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  int k=3;
  stack<int> st;
  for(int i=0;i<k;i++){ //q->st
    st.push(q.front());
    q.pop();
  }
  while(!st.empty()){ //st->q
    q.push(st.top());
    st.pop();
  }
  int t=q.size()-k; 
  for(int i=0;i<t;i++){ //to maintain order of remaining elements
    int x=q.front();
    q.pop();
    q.push(x);
  }
  while(!q.empty()){  //print queue
    cout<<q.front()<<" ";
    q.pop();
  }
  return 0;
}