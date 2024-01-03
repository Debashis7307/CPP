#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x,n,m;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the vector:";
    for(int i=0;i<n;i++){
        cin>>v[i];
       
    }
    cout<<"Enter the number which have to find:";
    cin>>m;
    int valu=-1;
    for(int i=(v.size()-1);i>=0;i--){
        if(v[i]==m) { 
            valu=i;
        break;
        }
    }
    cout<<"The last index is: "<<valu;
    return 0;
}