#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
  string s;
  cout<<"Enter a string:\n";
  cin>>s;
  sort(s.begin(),s.end());
  cout<<s;
  return 0;
}