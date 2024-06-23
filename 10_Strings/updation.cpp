#include<iostream>
#include<string>
using namespace std;

// int main(){
//   string s="Debashis";
//   cout<<s<<endl;
//   s[0]='S';
//   cout<<s<<endl;
//   return 0;
// }

int main(){
  string s;
  cout<<"Enter your string: ";
  getline(cin,s);
  for(int i=0;i<s.length();i++){
    if(i%2==0) s[i]='a';
  }
  cout<<"The updated string is: "<<s<<endl;
}