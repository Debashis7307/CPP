#include<iostream>
#include<stack>
using namespace std;

int main(){
  string s;
  cout << "Enter postfix expression: ";
  cin >> s;
  stack<string> st;
  for(int i=0;i<s.length();i++){
    if(isdigit(s[i])){
      st.push(to_string(s[i]-'0'));
    }
    else{
      string v2=st.top(); st.pop();
      string v1=st.top(); st.pop();
      st.push(v1 + s[i] + v2);
    }
  }
  cout << "Result: " << st.top() << endl;
  return 0;
}