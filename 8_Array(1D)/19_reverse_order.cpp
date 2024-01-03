#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the vector:";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        v.push_back(m);
    }
    cout<<"The reverse order is: \n";
    for(int i=(n-1);i>=0;i--){
        cout<<v[i]<<" ";
    }
    return 0;
}