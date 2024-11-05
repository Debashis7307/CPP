#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
  string s;
  cout<<"Enter the string :";
  cin>>s;
  //converts str to int without use buildin function
  int sum =0 , mul =1;
  while(s.size()){
    sum+=mul*(s.back()-'0');
    s.pop_back();
    mul*=10;
  }
  cout<<"Int of the string is : " << sum ;
  return 0;
}