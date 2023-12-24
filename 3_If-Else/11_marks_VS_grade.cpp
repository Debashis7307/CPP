#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter your marks:";
    cin>>m;
    if(m>=91 && m<=100){
        cout<<"Excellent.";
    }
    else if(m>=81 && m<=90){
        cout<<"Very good.";
    }
    else if(m>=71 && m<=80){
        cout<<"Good.";
    }
   else if(m>=61 && m<=70){
        cout<<"Can do better.";
    }
   else if(m>=51 && m<=60){
        cout<<"Average.";
    }
   else if(m>=40 && m<=50){
        cout<<"Below average.";
    }
    else if(m<40){
        cout<<"Fail.";
    }
    else{
        cout<<"The marks is not valid.";
    }
    return 0;
}