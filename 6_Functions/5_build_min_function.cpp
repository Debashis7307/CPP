#include<iostream>
using namespace std;
int min(int x, int y){
    int a;
    if(x<y) a=x;
    else a=y;
    return a;
}
int main(){
    int x,y;
    cout<<"Enter two number:";
    cin>>x>>y;
    cout<<"Minimum is: "<<min(x,y);
}