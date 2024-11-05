#include<iostream>
#include<string.h>
using namespace std;

int main(){
  string str;
  cout<<"Enter a string: ";
  getline(cin,str);
  int count=0;
  for(int i=0;i<str.length();i++){
    if(str[i]=='a'|str[i]=='e'|str[i]=='i'|str[i]=='o'|str[i]=='u'|str[i]=='A'|str[i]=='E'|str[i]=='I'|str[i]=='O'|str[i]=='U'){
      continue;
    }
    else{
      count++;
    }
  }
  cout<<"Total number of consonant: "<<count<<endl;
  return 0;
}