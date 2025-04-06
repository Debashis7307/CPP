#include <iostream>
using namespace std;

int main(){
  int arr[] = {5,0, 2, 9,0, 1, 5,0, 6,0};
  int n = sizeof(arr)/sizeof(arr[0]);
  // Bubble Sort
  // Time Complexity: O(n^2)
  bool check = true;
  for(int i = 0; i < n-1; i++){
    for (int j = 0; j < n-i-1; j++){
      if (arr[j] == 0 && arr[j+1] != 0){
        swap(arr[j], arr[j+1]);
        check = false;
      }
    }
    if (check) break;
  }
  cout << "Sorted array: \n";
  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}