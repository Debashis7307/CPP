#include<iostream>
using namespace std;
void sequence(int n){
  if(n==0) return;
  cout<<n<<" ";
  sequence(n-1);
  cout<<n<<" ";
  return;
}

int main(){
  int n;
  cout << "Enter a number to print the sequence: ";
  cin >> n;
  cout << "The sequence is: ";
  sequence(n);
  cout << endl;
  return 0;
}