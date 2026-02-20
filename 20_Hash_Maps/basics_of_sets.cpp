#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
  unordered_set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(5);
  s.insert(5);
  s.insert(5);
  // for each loop
  for(int ele : s){
    cout<<ele<<" ";
  }
  cout<<endl;
  cout<<s.size()<<endl;
  s.erase(5);
  cout<<s.size()<<endl;
  int target = 0;
  if(s.find(target)!=s.end()){ //if target is present in the set
    cout<<"Found "<<target<<endl;
  }
  else{//if target is not present in the set-> s.find(target) will return s.end()
    cout<<"404! Not Found"<<endl;
  }
  return 0;
}