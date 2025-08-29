#include<iostream>
#include<stack>
using namespace std;

int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  cout << "Top element: " << st.top() << endl;
  cout << "Stack size: " << st.size() << endl;
  st.pop();
  cout << "Top element after pop: " << st.top() << endl;
  cout << "Stack size after pop: " << st.size() << endl;
  st.push(30);
  st.push(40);
  st.push(50);
  // This is the backer way to print the stack elements

  // cout<<"All elements: "<<endl;
  // while(!st.empty()){
  //   cout<<st.top()<<endl;
  //   st.pop();
  // }
  // cout<<"Current stack size: "<<st.size()<<endl;
  stack<int> temp;
  while(!st.empty()){
    cout<<st.top()<<endl;
    int x=st.top();
    st.pop();
    temp.push(x);
  }
  cout<<st.size()<<endl;
  cout<<temp.size()<<endl;
  while(!temp.empty()){
    cout<<temp.top()<<endl;
    st.push(temp.top());
    temp.pop();
  }
  cout<<st.top()<<endl;
  cout<<st.size()<<endl;
  cout<<temp.size()<<endl;
  return 0;
}