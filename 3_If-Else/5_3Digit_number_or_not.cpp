#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"It is a 3 digit number .";
    }
    else{
        cout<<"ITt is not a 3 digit number .";
    }
    return 0;
}