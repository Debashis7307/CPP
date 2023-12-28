#include<iostream>
using namespace std;
int main(){
int n,m,sum=0;
cout<<"ENTER A NUMBER:";
cin>>n;
while(n>0){
    m=n%10;
    cout<<m;
    n/=10;
}
cout<<endl<<n+m<<endl;
    return 0;
}
