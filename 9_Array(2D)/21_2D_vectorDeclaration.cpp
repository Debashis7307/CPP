#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> v1(2,5);
  cout<<v1[0]<<" ";
  cout<<v1[1]<<" "<<endl;

  vector<vector<int> > v(5,vector<int> (4,7));
  // cout<<v[0][0]<<" ";
  // cout<<v[0][1]<<endl;
  // cout<<v[1][0]<<" ";
  // cout<<v[1][1]<<" ";
  for(int i= 0; i<v.size();i++){
    for(int j = 0; j<v[1].size();j++){
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}