#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"ENTER THE ROW:";
    cin>>a;
    int b;
    cout<<"ENTER THE COLOUMN:";
    cin>>b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}