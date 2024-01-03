#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the vector:";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the element of the vector: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int m;
    cout<<"Enter the terget number: ";
    cin>>m;
    cout<<"The doublets are: ";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==m) cout<<"("<<i<<","<<j<<")"<<endl;
        }
    }
    return 0;
}