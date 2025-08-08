#include<iostream>
#include<string>
using namespace std;

void eleminate(string ans, string str){
  if(str.length()==0){
    cout<<ans<<endl;
    return;
  }
  char ch=str[0];
  if(ch=='a'){
    eleminate(ans, str.substr(1));
  }
  else{
    eleminate(ans+ch, str.substr(1));
  }
}

int main(){
  string str;
  str="debashis bera";
  cout<<"The original string is: "<<str<<endl;
  cout<<"The strings after eliminating 'a' are: "<<endl;

  eleminate("", str);
  return 0;
}