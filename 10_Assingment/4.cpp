#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
  string s;
  cout<<"Enter the string :";
  cin>>s;
  int n=s.length();
  if(n%2!=0) cout<<"Invalid";
  else{
    reverse(s.begin()+n/2,s.end());
    cout<<"\nReversed string is : "<<s;
  }
  return 0;
}