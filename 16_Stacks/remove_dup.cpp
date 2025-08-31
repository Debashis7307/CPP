#include<iostream>
#include<stack>
using namespace std;

string RemoveDulicates(string str){
  stack<char> st;
  for(int i=0;i<str.length();i++){
    if(st.empty() || st.top()!=str[i]) st.push(str[i]);
  }
  string result="";
  while(!st.empty()){
    result=st.top()+result;
    st.pop();
  }
  return result;
}
int main(){
  string expr;
  cout << "Enter an expression: ";
  cin >> expr;
  cout<<"Your expression is: "<<expr<<endl;
  cout << "Expression after removing duplicates: " << RemoveDulicates(expr) << endl;
  return 0;
}