#include<iostream>
using namespace std;

int main(){
  int arr[] = {1, 2, 2, 5, 5, 5, 8, 10, 12, 15};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 2; // Element to find the first occurrence
  int low = 0, high = n - 1, mid;
  while(low<=high){
    mid = (low + high) / 2;
    if(arr[mid] == target){
      if(arr[mid-1]==target){
        high = mid - 1;
      }
      else{
        cout << "First occurrence of " << target << " is at index: " << mid << endl;
        break; // Found the first occurrence
      }
    }
    else if(arr[mid] < target){
      low = mid + 1; // Move to the right half
    }
    else{
      high = mid - 1; // Move to the left half
    }  
  }
  return 0;
}