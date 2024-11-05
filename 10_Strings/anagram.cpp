#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
  string s,t;
  cout<<"Enter a string:\n";
  cin>>s;
  cout<<"Enter another string:\n";
  cin>>t;
  sort(s.begin(),s.end());
  sort(t.begin(),t.end());
  cout<<((s==t)?"Anagram":"Not anagram");
  return 0;
}