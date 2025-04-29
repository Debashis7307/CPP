#include <iostream>
#include <algorithm> // for std::swap
using namespace std;

// Insertion sort algorithm -> divide the array into sorted and unsorted parts, and insert the elements of the unsorted part into the correct position in the sorted part
int main(){
  int arr[]={64, 25, 12, 22, 11};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"Before sorting: "<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  // Insertion sort algorithm
  for(int i=1;i<n;i++){
    int j=i;
    while(j>=1){
      if(arr[j]>=arr[j-1]){
        break;
      }
      else{
        swap(arr[j], arr[j-1]);
        j--;
      }
    }
  }
  cout << "\nSorted array: " << endl;
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  return 0; // time complexity: O(n^2), space complexity: O(1)
}