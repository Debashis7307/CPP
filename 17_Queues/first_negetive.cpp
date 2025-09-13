#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
  int arr[]={3,-4,-7,30,7,-9,2,1,6,-1};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=3; //window size
  vector<int> ans;
  queue<int> q;
  for(int i=0;i<n;i++){
    if(arr[i]<0) q.push(i); //store index of negative elements
  }
  int i=0;
  while(i+k<=n){
    if(!q.empty() && q.front()<i) q.pop(); //remove elements out of window
    if(!q.empty() && q.front()>=i && q.front()<i+k) ans.push_back(arr[q.front()]); //if front of queue is in window
    else ans.push_back(0); //no negative element in window
    i++;
  }
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
  return 0;
}