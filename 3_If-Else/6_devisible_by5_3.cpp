#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"The number is devisible by 3 & 5.";
    }
    else if(n%3==0 && n%5!=0){
        cout<<"The number is only devisible by 3.";
    }
    else if(n%3!=0 && n%5==0){
        cout<<"The number is only devisible by 5.";
    }
    else{
        cout<<"The number is nither devisible by 3 nor 5.";
    }
    return 0;
}