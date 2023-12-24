#include<iostream>
using namespace std;
int main(){
    float x,y;
    char op;
    cout<<"Write the problem:";
    cin>>x>>op>>y;
    switch(op){
        case '+':
        cout<<x+y;
        break;
        case '-':
        cout<<x-y;
        break;
        case '*':
        cout<<x*y;
        break;
        case '/':
        cout<<x/y;
        break;
    }
    return 0;
}