#include<iostream>//LeetCode:1480
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>v[i];
       
    }
    vector<int> run(n);
    run[0]=v[0];
    for(int i=1;i<n;i++){
      run[i]=run[i-1]+v[i];
    }
    int idx = -1;
    for(int i=0;i<n;i++){
        if(2*run[i]==run[n-1]){
          idx = i;
          break;
        }
        }
    if(idx!=-1){
      cout<<"Yes ! The given list can be partitioned into two sub-lists, at the indx : "<<idx+1<<".\n";
    }
    else{
        cout<<"No ! The given list cannot be partitioned into two sub-lists.\n";
    }
    return 0;
}