#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    int nsp=1;
    for(int q=1;q<=2*n-1;q++){
            cout<<"*";
        }
        cout<<endl;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}