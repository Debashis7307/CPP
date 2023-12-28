#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Which number's table ,you want to know?"<<endl;
    cin>>n;
    cout<<"The table of "<<n<<endl;
    for(int i=1;i<=10;i++){
        int a;
        a=i*n;
        cout<<n<<"-"<<i<<"-"<<a<<endl;
    }
    return 0;
}