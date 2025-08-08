#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

void print(int n,int arr[]){
  if(n==0){
    cout<<arr[0]<<" ";
    return;
  }
  print(n-1, arr);
  cout<<arr[n]<<" ";
  return ;
}

void print_Max(int arr[],int n,int idx, int max){
  if(idx==n){
    cout<<max<<" ";
    return;
  }
  if(max<arr[idx]) max=arr[idx];
  print_Max(arr,n,idx+1,max);
}

int max2(int arr[],int n, int idx){
  if(idx==n) return INT_MIN; // Base case: if index is out of bounds, return minimum integer
  return max(arr[idx],max2(arr,n,idx+1));
}

int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of the array: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  
  cout<<"The elements of the array are: ";
  print(n-1, arr);
  cout<<endl;
  cout<<"The maximum element in the array is: ";
  int idx = 0;
  int max = INT_MIN;
  print_Max(arr, n, idx, max);
  cout<<endl;
  cout<<"The maximum element in the array is: ";
  cout<<max2(arr,n,idx);
  cout<<endl;
  return 0;
}