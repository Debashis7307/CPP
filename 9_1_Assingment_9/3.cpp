#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int m,n;
  cout<<"Enter the row no: ";
  cin>>m;
  cout<<"Enter the column no: ";
  cin>>n;
  int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  int u , v ,w ,x;
  cout<<"Enter the starting coordinate:";
  cin>>u>>v;
  cout<<"Enter the ending coordinate:";
  cin>>w>>x;
  int sum = 0;
  for(int i =min(u,w);i<=max(u,w);i++){
    for(int j=min(v,x);j<=max(v,x);j++){
      sum+=arr[i][j];
    }
  }
  cout<<"The sum of your requered portion is : "<<sum;
  return 0;
}