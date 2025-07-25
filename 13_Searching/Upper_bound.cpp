#include<iostream>
using namespace std;

int main(){
  // Lower Bound in C++
  // Take a sorted array and an element to find the lower bound
  int arr[] = {1, 2, 5, 8, 10, 12, 15};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target=9;
  int low = 0, high = n - 1, mid;
  bool found = false;
  while(low<=high){
    mid= (low + high) / 2;
    if(arr[mid] == target){
      found = true; // target found
      cout<<"Upper Bound is- "<<arr[mid+1]<<endl;
      break;// if found, exit the loop
    }
    else if(arr[mid] < target){
      low = mid+1; // move to the right half
    }
    else{
      high = mid-1; // move to the left half
    }
  }
  if(!found){
    cout<<"Upper Bound is- "<<arr[low]<<endl; // low will point to the first element >= target
  }
cout<<"Hey!";
  return 0;
}