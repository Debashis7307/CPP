#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  string str = "Hello there , I am here to learn something new!";
  int len = str.size();
  cout<<len<<endl; // for find the length
  cout<<str.length()<<endl;
  
  str.push_back('b'); //push_back & pop_back
  cout<<str<<endl;
  str.pop_back();
  cout<<str<<endl;

  cout<<str+" exciting"; //+ -> concatenate strings

  reverse(str.begin(),str.end());
  cout<<endl<<str<<endl; // reverse string
  return 0;
}