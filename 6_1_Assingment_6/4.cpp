#include<iostream>
using namespace std;
int squ(int x){
    int squ=x*x;
    return squ;
}
void digit(int x){
 int ans=0;
 while(x>0){
    x/=10;
    ans++;
 }
 int n=ans;
    cout<<squ(n);
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"The square of the digit number is:";
    digit(n);
    return 0;
}