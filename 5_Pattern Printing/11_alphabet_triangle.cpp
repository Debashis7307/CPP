#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)(64+j);
        }
        cout<<endl;
    }
    return 0;
}