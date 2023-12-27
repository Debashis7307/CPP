#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Which number's table , you want to know?"<<endl;
    cin>>n;
    cout<<"The table of "<<n<<endl;
    for(int i=1; i<=10; i++){
        int x=(n*i);
        cout<<n<<" "<<i<<" "<<x<<endl;
    }
    return 0;
}