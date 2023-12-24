#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(n%3==0 || n%5==0){
        if(n%15!=0){
            cout<<"The number is devisible by 3 or 5 but not 15.";
        }
        else{
            cout<<"The number is devisible by 3 & 5 also 15";
        }
        
    }
else{
    cout<<"The number is not devisible by 3,5,15";
}
    return 0;
}