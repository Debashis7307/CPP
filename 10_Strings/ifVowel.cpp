#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;
  cout<<"Enter your string:";
  getline(cin,s);
  int count=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
      count++;
      }
      }
      cout<<"Number of vowels in the string is:"<<count<<endl;
      return 0;
}