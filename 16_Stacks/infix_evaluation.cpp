#include<iostream>
#include<stack>
using namespace std;

int prio(char opr){
  if(opr=='+'||opr=='-') return 1;
  else return 2;
}
int eval(int v1, int v2, char opr){
  switch(opr){
    case '+': return v1+v2;
    case '-': return v1-v2;
    case '*': return v1*v2;
    case '/': return v1/v2;
  }
  return 0;
}
int main(){
  string s;
  cout << "Enter infix expression: ";
  cin >> s;
  //need 2 stack val & op
  stack<int> val;
  stack<char> op;
  for(int i=0;i<s.length();i++){
    if(isdigit(s[i])){ //push the digit
      val.push(s[i]-'0');
    }
    else{//push the operator
      if(op.empty()|| prio(op.top())<prio(s[i])) op.push(s[i]);
      else{
        while(!op.empty() && prio(op.top())>=prio(s[i])){//solve
          int v2=val.top(); val.pop();
          int v1=val.top(); val.pop();
          char opr=op.top(); op.pop();
          val.push(eval(v1,v2,opr));
        }
        op.push(s[i]);
      }
    }
  }
  while(!op.empty()){//until the operator stack is empty
    int v2=val.top(); val.pop();
    int v1=val.top(); val.pop();
    char opr=op.top(); op.pop();
    val.push(eval(v1,v2,opr));
  }
  cout << "Result: " << val.top() << endl;
  return 0;
}