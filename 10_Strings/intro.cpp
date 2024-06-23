#include<iostream>
using namespace std;
int main(){
  char str[10]={'a','b','c','d','e'};
  for(int i=0;i<5;i++){
    cout<<str[i]<<" ";
  }
  cout<<endl;
  cout<<(int)(str[8]);
  return 0;
}