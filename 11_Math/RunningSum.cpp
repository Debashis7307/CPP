#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the vector:";
    for(int i=0;i<n;i++){
        cin>>v[i];
       
    }
    vector<int> run(n);
    run[0]=v[0];
    for(int i=1;i<n;i++){
      run[i]=run[i-1]+v[i];
    }
    cout<<"\n\tThe Running Sum of the vector is:";
    for(int i=0;i<n;i++){
        cout<<" "<<run[i];
        }
    return 0;
}