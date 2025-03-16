#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int arr[]={7,1,2,5,8,4,9,3,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=4;
  int max_sum=INT_MIN;
  int maxidx=0;
  int presum=0;
  for(int i=0;i<k;i++){
    presum+=arr[i];
  }
  max_sum=presum;
  int i=1,j=4;
  while(j<n){
    int currsum=presum+arr[j]-arr[i-1];  //sliding window algorithm
    if(currsum>max_sum){
      max_sum=currsum;
      maxidx=i;
    }
    presum=currsum;
    j++;
    i++;
  }
  cout<<max_sum<<" "<<maxidx<<endl;
  return 0;
}