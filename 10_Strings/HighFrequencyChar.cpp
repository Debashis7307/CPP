#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  string s;
  cout<<"Enter a string:\n";
  getline(cin,s);
  vector<int> arr(26,0);//initialize the array with 0's.
  for(int i=0;i<s.length();i++){
    char ch = s[i];
    int ascii =  (int)ch;
    arr[ascii-97]++;
  }
  int max=0;
  for(int i=0;i<26;i++){
    if(arr[i]>max) max=arr[i];
  }
   for(int i=0;i<26;i++){
    if(arr[i]==max) {
      cout<<char(i+97)<<" "<<max<<endl;
    }
  }
  return 0;
}