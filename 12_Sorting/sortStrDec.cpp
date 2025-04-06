#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
 string s = "AZXTYUYZRXWQ";
 string str="";
 for(int i=0;i<s.length();i++){
  if(s[i]>='X'){
    str.push_back(s[i]);
  }
 }
 cout<<str<<endl;
 sort(str.begin(),str.end());
 cout<<"Sorted string: "<<str<<endl;
 return 0;
}