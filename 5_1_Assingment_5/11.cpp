#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        if(i<n) nsp--;
        else nsp++;
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        if(i<n) nst+=1;
        else nst-=1;
        cout<<endl;
    }
    return 0;
}