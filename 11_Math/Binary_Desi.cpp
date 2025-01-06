#include<iostream>
using namespace std;

int binary_to_decimal(string &binary){
  int ans = 0;
  int n=binary.size();
  for(int i=n-1;i>=0;i--){
    char ch = binary[i];
    int num = ch - '0';
    ans+=num*(1<<(n-i-1));
  }
  return ans;
}

int main(){
  string binary;
  cout<<"Enter the binary number: ";
  cin>>binary;
  cout<<"Decimal number is: "<<binary_to_decimal(binary)<<endl;
  return 0;
}