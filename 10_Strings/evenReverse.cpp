#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 string str;
 cout<<"Enter the string of even length: ";
 cin>>str;
 n=str.size();
 if(n%2==0){
  reverse(str.begin()+0,str.begin()+(n/2));
    cout<<"Reversed string: "<<str<<endl;
    }
  else{
    cout<<"Please enter a string of even length."<<endl;
  }
  return 0;
}