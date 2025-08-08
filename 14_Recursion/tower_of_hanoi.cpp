#include<iostream>
using namespace std;

void hanoi(int n , char a, char b ,char c){
  if(n==0) return; // Base case: no disks to move
  hanoi(n-1,a,c,b);
  cout<<a<<" -> "<<c<<endl; // Move disk from a to c
  hanoi(n-1,b,a,c);
}

int main(){
  int n;
  cout << "Enter the number of disks: ";
  cin >> n; // Input the number of disks
  cout << "Moves to solve Tower of Hanoi with " << n << " disks:" << endl;
  hanoi(n, 'A', 'B', 'C'); // A is source, B is auxiliary, C is destination
  return 0;
}