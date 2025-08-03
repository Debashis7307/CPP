#include<iostream>
using namespace std;

void greatings(int n){
  if(n==0) return;
  cout<< "Good Morning!" << endl;
  greatings(n-1);
}

int main(){
  int n;
  cout<< "How many times(+) do you want to print 'Good Morning'? ";
  cin>>n;
  greatings(n);
  return 0;
}