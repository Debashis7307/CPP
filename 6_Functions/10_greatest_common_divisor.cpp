#include<iostream>
using namespace std;
int fun(int x,int y){
    int hcf;
    for(int i=min(x,y);i>=1;i--){
        if(x%i==0 && y%i==0){    // then i is the common factor of x & y.
        hcf=i;
        break;
        }
    }
    return hcf;
}
int main(){
    int x,y;
    cout<<"Enter two number: ";
    cin>>x>>y;
cout<<"the greatest common divisor is:"<<fun(x,y);
    return 0;
}