#include<iostream>
using namespace std;
void insequence(int n){
  if(n==0) return;
  insequence(n-1);
  cout<<n<<" ";
  return;
}
void desequence(int n){
  if(n==0) return;
  cout<<n<<" ";
  desequence(n-1);
  return;
}
int main(){
  int n;
  cout << "Enter a number to print the sequence: ";
  cin >> n;
  cout << "The sequence is: ";
  insequence(n);
  desequence(n-1);
  cout << endl;
  return 0;
}