#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string str){
  if(str.length()%2!=0) return false;
  stack<char> st;
  for(int i=0;i<str.length();i++){
    if(str[i]=='(') st.push(str[i]);
    else if(str[i]==')'){
      if(st.empty()) return false;
      st.pop();
    }
  }
  return st.empty();
}
int main(){
  string expr;
  cout << "Enter an expression: ";
  cin >> expr;
  if(isBalanced(expr)){
    cout << "Balanced" << endl;
  } else {
    cout << "Not Balanced" << endl;
  }
  return 0;
}