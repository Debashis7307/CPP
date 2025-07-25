#include<iostream>
using namespace std;

int main(){
  int arr[]={0, 1,2, 3, 4, 5, 6, 7, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int answer=-1;
  int low = 0, high = n - 1, mid;
  while(low<=high){
    mid = (low + high) / 2;
    if(arr[mid] == mid){
      low = mid + 1;
    }
    else{
      answer = mid;
      high = mid - 1;
    }
  }
  cout << "First missing positive number is: " << answer << endl;
  return 0;
}