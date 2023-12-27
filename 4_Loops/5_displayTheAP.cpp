#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"How many time you want to print?"<<endl;
    cin>>n;
    for(int i=4; i<=(3*n+1);i=i+3){
        cout<<i<<" ";
    }
    return 0;
}