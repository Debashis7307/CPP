#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    int nsp=1;
  
    for(int q=1;q<=2*n-1;q++){
            cout<<q;
        }
        cout<<endl;
        
    for(int i=1;i<=n-1;i++){
        int a=1;
        for(int j=1;j<=n-i;j++){
            cout<<(char)(64+j);
           a++;
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
            a++;
        }
        nsp+=2;
        
        for(int j=1;j<=n-i;j++){
            cout<<(char)(64+a);
            a++;
        }
        cout<<endl;
    }
    return 0;
}