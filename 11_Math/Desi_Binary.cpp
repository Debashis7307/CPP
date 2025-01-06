#include<iostream>
using namespace std;

string desimal_to_binary(int num){
  string binary="";
  while(num>0){
    if(num%2==0){
      binary+='0';
    }else{
      binary+='1';
    }
    num >>1;  // num = num/2;
  }
  return binary;

}

int main(){
  int num;
  cout<<"Enter the decimal number: ";
  cin>>num;
  cout<<"Binary number is: "<<desimal_to_binary(num)<<endl;
  return 0;
}