#include<iostream>
#include<stack>
using namespace std;

int prio(char opr){
  if(opr=='+'||opr=='-') return 1;
  else return 2;
}
int main(){
  string s;
  cout << "Enter infix expression: ";
  cin >> s;
  //need 2 stack val & op
  stack<string> val;
  stack<char> op;
  for(int i=0;i<s.length();i++){
    if(isdigit(s[i])){ //push the digit
      val.push(to_string(s[i]-'0'));
    }
    else{//push the operator
      if(s[i]==')'){
        while(op.top()!='('){
          string v2=val.top(); val.pop();
          string v1=val.top(); val.pop();
          char opr=op.top(); op.pop();
          val.push(v1+v2+opr);//postfix
        }
        op.pop();//pop the '('
      }
      else if(op.empty()|| prio(op.top())<prio(s[i]) || s[i]=='(' || op.top()=='(') op.push(s[i]);
      else{
        while(!op.empty() && prio(op.top())>=prio(s[i])){//solve
          string v2=val.top(); val.pop();
          string v1=val.top(); val.pop();
          char opr=op.top(); op.pop();
          val.push(v1+v2+opr);//postfix
        }
        op.push(s[i]);
      }
    }
  }
  while(!op.empty()){//until the operator stack is empty
    string v2=val.top(); val.pop();
    string v1=val.top(); val.pop();
    char opr=op.top(); op.pop();
    val.push(v1+v2+opr);//postfix
  }
  cout << "Result: " << val.top() << endl;
  return 0;
}