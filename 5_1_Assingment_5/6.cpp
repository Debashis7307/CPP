#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"ENTER THE ROW NUMBER:";
    cin>>m;
    int n;
    cout<<"ENTER THE COLOUMN NUMBER:";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==m||j==1||j==n)
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}