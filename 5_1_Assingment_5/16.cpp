#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    int nsp=1;
    int t=1;
    int q;
    for(q=1;q<=2*n-1;q++){
            cout<<t;
        
        if(q<n) t++;
        else t--;
    }
        cout<<endl;
        
    for(int i=1;i<=n-1;i++){
        int a=0;
        for(int j=1;j<=n-i;j++){
            cout<<j;
           a++;
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        
        }
        nsp+=2;
        
        for(int j=1;j<=n-i;j++){
            cout<<a;
            a--;
        }
        cout<<endl;
    }
    return 0;
}