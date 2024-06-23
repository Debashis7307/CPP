#include<iostream>
#include<string>
using namespace std;

int main(){
  string str="Debashis";
  //substr(starting_index,substring_len)
  cout<< str.substr(3,str.length())<<endl;
}