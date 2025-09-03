#include<iostream>
#include<stack>
using namespace std;

int main(){
  string s;
  cout << "Enter postfix expression: ";
  cin >> s;
  stack<int> st;
  for(int i=0;i<s.length();i++){
    if(isdigit(s[i])){
      st.push(s[i]-'0');
    }
    else{
      int v2=st.top(); st.pop();
      int v1=st.top(); st.pop();
      switch(s[i]){
        case '+': st.push(v1+v2); break;
        case '-': st.push(v1-v2); break;
        case '*': st.push(v1*v2); break;
        case '/': st.push(v1/v2); break;
      }
    }
  }
  cout << "Result: " << st.top() << endl;
  return 0;
}