#include<iostream>
using namespace std;

int possible_ways(int n){
  if(n < 0) return 0; // No way to climb negative steps
  if(n == 0) return 1; // One way to stay on the ground
  return possible_ways(n - 1) + possible_ways(n - 2) + possible_ways(n - 3); // Sum of ways from n-1, n-2, and n-3 steps
}

int main(){
  int n;
  cout << "Enter the number of steps: ";
  cin >> n;
  cout << "Possible ways to climb " << n << " steps: " << possible_ways(n) << endl;
  return 0;
}