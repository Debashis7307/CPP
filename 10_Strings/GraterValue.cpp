#include<iostream>
#include<string>
using namespace std;

int main(){
  string arr[]={"01625","0123","0124","0124","01230"};
  int max = stoi(arr[0]);
  int idx = 0;
  for(int i=1;i<5;i++){
    if(stoi(arr[i])>max) {max=stoi(arr[i]); idx =i;}
  }
  cout<<max<<" "<<idx;
  return 0;
}