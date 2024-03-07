#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the size :- ";
  cin>>n;
  int arr[n];
  cout<<"Enter the Binary number(only 0s & 1s) :- ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int sum =0;
  int ind =1;
  for(int j =n-1;j>=0;j--){
    sum += arr[j]*ind;
    ind*=2;
  }
  cout<<"The desimal form of this binary is :- "<<sum;
  return 0;
}