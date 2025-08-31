#include<iostream>
#include<stack>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Your elements are: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  stack<int>st;
  int res[n];
  res[0]=-1;
  st.push(arr[0]);
  for(int i=1;i<n;i++){
    //pop
    while(!st.empty() && st.top()<=arr[i]){
      st.pop();
    }
    //ans
    if(st.empty()) res[i]=-1;
    else res[i]=st.top();
    //push
    st.push(arr[i]);
  }
  cout<<"The previous greater elements are: ";
  for(int i=0;i<n;i++){
    cout<<res[i]<<" ";
  }
  cout<<endl;
  return 0;
}