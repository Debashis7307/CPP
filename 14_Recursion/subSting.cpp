#include<iostream>
using namespace std;

void subStr(string ans , string str){
  if(str.length()==0){
    cout<<ans<<endl;
    return;
  }
  char ch=str[0];
  subStr(ans, str.substr(1));
  subStr(ans+ch, str.substr(1));
}

int main(){
  string str;
  str="abc";
  cout<<"The original string is: "<<str<<endl;
  cout<<"The substrings are: "<<endl;

  subStr("", str);
  return 0;
}