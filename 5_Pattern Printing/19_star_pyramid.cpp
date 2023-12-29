#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    
    //PROCESS-1:

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i;k++){
    //         cout<<"*";
    //     }
    //     for(int l=1;l<=(i-1);l++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //PROCESS-2:

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=(2*i)-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}