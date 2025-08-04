#include<iostream>
using namespace std;

int pow(int x,int y){
  if(y==0) return 1; // Base case: x^0 = 1
  if(y==1) return x; // Base case: x^1 = x
  int ans=pow(x,y/2); // Recursive call for exponent halved
  if(y%2==0){
    ans = ans * ans; // If even, combine results
  }else{
    ans = ans * ans * x; // If odd, combine results with extra x
  }
  return ans;
}

int main(){
  int x, y;
  cout << "Enter base (x): ";
  cin >> x;
  cout << "Enter exponent (y): ";
  cin >> y;
  cout << x << "^" << y << " = " << pow(x, y) << endl; // Output the result
  return 0;
}