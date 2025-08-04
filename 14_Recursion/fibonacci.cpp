#include<iostream>
using namespace std;

int fibo(int n){
  if(n==1 || n==2) return 1;
  return fibo(n-1)+fibo(n-2);
}

int main(){
  int n;
  cout << "Enter the position in Fibonacci sequence: ";
  cin >> n;
  cout << "Fibonacci number at position " << n << " is: " << fibo(n) << endl;
  return 0;
}