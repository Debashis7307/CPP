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
    cout<<"Second half of the string: "<<str.substr(n/2)<<endl;
  }
  else{
    cout<<"Please enter a string of even length."<<endl;
  }
  return 0;
}