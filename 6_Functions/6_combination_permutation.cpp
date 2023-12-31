#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f*=i;
    }
    return f;
}
int combination(int n, int r){
    int ncr;
    ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int permutation(int n, int r){
    int npr;
    npr=fact(n)/fact(n-r);
    return npr;
}

int main(){
    int a,b;
    cout<<"ENTER THE n: ";
    cin>>a;
    cout<<"ENTER THE r: ";
    cin>>b;
    int ncr=combination(a,b);
    int npr=permutation(a,b);
    cout<<"The combination of "<<a<<" and "<<b<<" is: "<<ncr<<endl;
     cout<<"The permutation of "<<a<<" and "<<b<<" is: "<<npr;
    return 0;
}