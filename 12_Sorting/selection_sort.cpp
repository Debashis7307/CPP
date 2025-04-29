#include <iostream>
#include <climits>
#include <algorithm> // for std::swap
using namespace std;

int main() {
  int arr[]={64, 25, 12, 22, 11};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"Before sorting: "<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  // Selection sort algorithm -> select the minimum element from the unsorted array and swap it with the first element of the sorted array
  for(int i=0;i<n-1;i++){
    int min=INT_MAX;
    int min_index=i;
    for(int j=i;j<n;j++){
      if(arr[j]<min){
        min=arr[j];
        min_index=j;
      }
    }
    // Swap the found minimum element with the first element of the unsorted array
    swap(arr[i], arr[min_index]);
  }
  cout << "\nSorted array: " << endl;
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  return 0;  // time complexity: O(n^2), space complexity: O(1)
  // The time complexity of selection sort is O(n^2) in all cases (best, average, and worst) because it always goes through the entire array to find the minimum element.