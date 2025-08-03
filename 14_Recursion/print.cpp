#include<iostream>
using namespace std;

int printNto1(int n){
  if (n==0) return 0;
  cout<<n<<endl;
  printNto1(n-1);
}

int print(int n){
  if(n==1) {
    cout<<n<<endl;
    return 0;
  }
  print(n-1);
  cout<<n<<endl;
  return 0;
}

int main(){
  int n;
  cout << "Enter a number to print from N to 1: ";
  cin >> n;
  printNto1(n);
  cout << "Now printing from 1 to N:" << endl;
  print(n);

  return 0;
}