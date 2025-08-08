#include<iostream>
#include<vector>
using namespace std;

void powerSet(int arr[], int n, int idx, vector<int> ans){
  if(idx == n){
    for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;
  }
  powerSet(arr,n,idx+1, ans);
  ans.push_back(arr[idx]);
  powerSet(arr, n, idx+1, ans);
}

int main(){
  int arr[] = {1, 2, 3};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"The original array is: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"\nThe power set is: "<<endl;
  
  vector<int> ans;
  powerSet(arr, n, 0, ans);
  
  return 0;
}