#include<iostream>
#include<stack>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number of days: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the stock prices: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  cout<<endl;
  stack<int>st;
  int res[n];
  res[0]=-1;
  st.push(0);
  for(int i=1;i<n;i++){
    //pop
    while(!st.empty() && arr[st.top()]<=arr[i]){
      st.pop();
    }
    //ans
    if(st.empty()) res[i]=-1;
    else res[i]=st.top();
    //push
    st.push(i);
  }
  cout<<"The previous greater elements are: ";
  for(int i=0;i<n;i++){
    cout<<i-res[i]<<" ";
  }
  cout<<endl;
  return 0;
}