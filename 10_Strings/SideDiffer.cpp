#include<iostream>
#include<string.h>
using namespace std;

int main(){
  string s;
  cout<<"Enter a string:\n";
  cin>>s;
  int count =0;
  for(int i=0;i<s.size()-1;i++){
    if(s[i]!=s[i+1] && s[i]!=s[i-1]) count++;
  }
  cout<<"Number of sides are different:\n";
  cout<<count<<endl;
  return 0;
}