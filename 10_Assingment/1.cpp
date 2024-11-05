#include<iostream>
#include<string.h>
using namespace std;

int main(){
  string str;
  cout<<"Enter a string: \n";
  getline(cin,str);
  for(int i=0; i<=str.length(); i++){
    if (i%2!=0)
    str[i]='#';
  }
  cout<<"String after replacing odd index characters with '#': "<<endl;
  cout<<str<<endl;
  return 0;
}