#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
 //strs = ["flower","flow","flight"]
 vector<string> v;
 v.push_back("flower");v.push_back("flow");v.push_back("flight");
 sort(v.begin(),v.end());
 int n=v.size();
 if(n==1) cout<<v[0];
 string first =v[0];
 string last =v[n-1];
 string s =" ";
 for(int i=0;i<min(first.length(),last.length());i++){
  if(first[i]==last[i]){
    s+=first[i];
  }
  else break;

 }
 cout<<s;
  return 0;
}