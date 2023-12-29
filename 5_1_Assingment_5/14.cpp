#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=i-1;k>=0;k--){
            cout<<(char)(65+k);
        }
        for(int k=1;k<i;k++){
            cout<<(char)(65+k);
        }
        
        cout<<endl;
    }
    return 0;
}