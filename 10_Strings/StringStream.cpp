#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

int main(){
  string s;
  cout<<"Enter a string:\n";
  getline(cin,s);
  stringstream ss(s); // Converting the given string into stream of characters.
  string temp;
  cout<<"The words in the string are:\n";
  while(ss>>temp){
    cout<<temp<<endl;
  }
  return 0;
}