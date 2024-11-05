#include<iostream>
#include<string.h>
using namespace std;

bool check(string &str){
  int i=0;
  int j = str.length()-1;
  while(i<=j){
    if(str[i]!=str[j]) return false;
    i++;j--;
  }
}

int main(){
  string str;
  cout<<"Enter the string:\n";
  cin>>str;
  cout<<(check(str)?"Palindrome":"Not Palindrome");
}