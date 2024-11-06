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
  vector<string> v;
  while(ss>>temp){ // Extracting each word from the string and storing it in the vector
    v.push_back(temp);
  }
  sort(v.begin(),v.end());
  int maxcount=1,count=1;
  for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]){
      count++;
    }
    else{
      count=1;
    }
    maxcount=max(maxcount,count);
  }
  cout<<"The most occurring word is: "<<endl;
  count = 1;
  for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]){
      count++;
    }
    else{
      count=1;
    }
    if(count==maxcount){
      cout<<v[i]<<" "<<maxcount<<endl;
    }
  }
  return 0;
}