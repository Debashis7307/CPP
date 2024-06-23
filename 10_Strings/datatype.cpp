#include<iostream>
#include<string>
using namespace std;

int main(){
  string str = "Mahadev is everything";
  cout<<str<<endl;
  string s;
  cout<<"Enter a string: ";
  getline(cin,s);
  cout<<"You entered: "<<s<<endl;
  cout<<"Length of string: "<<s.length()<<endl;
  return 0;
}