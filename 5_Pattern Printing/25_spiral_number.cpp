#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            //pseudo variabels:
            int a=i;
            int b=j;
            if(a>n) a=2*n-i;
            if(b>n) b=2*n-j;
            //replaceing i to n & n to 1:
            int x= min(a,b);
            cout<<n+1-x<<" ";
        }
        cout<<endl;
    }
    return 0;
}