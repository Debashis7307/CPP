#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
  int arr[]={19,12,23,8,16};
  int n=sizeof(arr)/sizeof(arr[0]);
  vector<int> v(n,0);
  int count =0;
  //print the array
  cout << "Original array: ";
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  for(int i=0;i<n;i++){
    int min=INT_MAX;
    int idx=-1;
    for(int j=0;j<n;j++){
      if(v[j]==1) continue; // skip already visited elements
      else{
        if(arr[j]<min){
          min=arr[j];
          idx=j;
        }
      }
    }
    arr[idx]=count;
    count++;
    v[idx]=1;
  }
  cout << "\nRenumbered array: ";
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  return 0;
}