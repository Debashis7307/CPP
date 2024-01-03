#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
  int max=arr[0];
  for(int i=1;i<=n-1;i++){
    if(arr[i]>max) max=arr[i];
  }

  int smax=INT_MIN;
  for(int i=1;i<=n-1;i++){
    if(arr[i]!=max && arr[i]>smax ) smax=arr[i];
  }
  cout<<"Second max element is: "<<smax;
    return 0;
}