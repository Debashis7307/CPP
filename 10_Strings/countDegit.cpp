#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number:";
  cin>>n;
  string s=to_string(n);
  int len=s.length();
  cout<<"The degit count of your number is :"<<len<<endl;
  return 0;
}