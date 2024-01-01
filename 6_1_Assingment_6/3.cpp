#include<iostream>
using namespace std;
void odd(int x, int y){
    for(int i=min(x,y);i<=max(x,y);i++){
    if(i%2!=0){
        cout<<i<<" ";
    }
    }
}
int main(){
    int a,b;
    cout<<"Enter the range:";
    cin>>a>>b;
    cout<<"The odd numbers between the range are:";
    odd(a,b);
    return 0;
}