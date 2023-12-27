#include<iostream>
using namespace std;
int main(){
    int a,b,power=1;
    cout<<"ENTER A NUMBER:";
    cin>>a;
    cout<<"ENTER IT'S POWER:";
    cin>>b;
    for(int i=1;i<=b;i++){
        power*=a;
    }
    cout<<"RESULT="<<power<<endl;
    return 0;
}