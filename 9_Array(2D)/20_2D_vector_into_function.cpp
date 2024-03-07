#include<iostream>
#include<vector>
using namespace std;
void change2Dvector(vector<vector<int> > &v){
v[0][0]=10;
v[1][1]=55;
}

int length(vector<vector<int> > &v){
  cout<<v.size()<<endl;
}

int main(){
  vector<int> v1;
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);

  vector<int> v2;
  v2.push_back(4);
  v2.push_back(5);

  vector<int> v3;
  v3.push_back(6);
  v3.push_back(7);
  v3.push_back(8);
  v3.push_back(9);
  v3.push_back(10);

  vector<vector<int> > v;
  v.push_back(v1);
  v.push_back(v2);
  v.push_back(v3);
  
  cout<<v[0][0]<<endl;
  change2Dvector(v);
  cout<<v[0][0]<<endl;
  cout<<v[1][1]<<endl;
  length(v);
  cout<<endl<<v[0].size();
  cout<<endl<<v[1].size();
  cout<<endl<<v[2].size();
  return 0;
}