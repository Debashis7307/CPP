#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int squ=1;
    cout<<"The squares of first "<<n<<" numbers are:"<<endl;
    for(int i=1;i<=n;i++){
        squ=i*i;
        cout<<squ<<endl;
    }
}