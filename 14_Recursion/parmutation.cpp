#include<iostream>
#include<vector>
using namespace std;

void per(string ans,string str){
  if(str.length()==0){
    cout<<ans<<endl;
    return;
  }
  for(int i=0;i<str.length();i++){
    char ch=str[i];
    string left = str.substr(0, i);
    string right = str.substr(i + 1);
    per(ans + ch, left + right);
  }
}

int main(){
  string str;
  cout<<"Enter the string: ";
  cin>>str;
  cout<<"The permutations of the string are: "<<endl;
  per("", str);
  return 0;
}