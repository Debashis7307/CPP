#include<iostream>
using namespace std;
bool is_power(int no){
  if(no==1) return true;
  if(no%2!=0||no==0) return false;
  is_power(no/2);
}

int main(){
  int n;
  cout << "Enter a number to check if it is a power of 2: ";
  cin >> n;
  if(is_power(n)){
    cout << n << " is a power of 2." << endl;
  } else {
    cout << n << " is not a power of 2." << endl;
  }
  return 0;
}