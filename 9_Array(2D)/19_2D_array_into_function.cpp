#include<iostream>
#include<vector>
using namespace std;
void change(int arr[]){
arr[0]=10;
}

void change2d(int crr[3][3]){  // whenever you pass a 2d array in a function , you have to mantion the size of the array in it's argument
  crr[1][1]=55;
}
int main(){
  int arr [3] = {1,2,3};
  cout<<arr[0]<<endl;
  change(arr);
  cout<<arr[0]<<endl;
  int brr [3][3]={{1,2,3},{4,5,6},{7,8,9}};
  cout<<brr[1][1]<<endl;
  change2d(brr);
  cout<<brr[1][1]<<endl;
  
  return 0;
}