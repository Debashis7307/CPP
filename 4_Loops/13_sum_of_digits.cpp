#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int sum=0;
    int lastdigit;
    while(n>0){
       lastdigit =n%10;
        sum=sum+lastdigit;
        n/=10;
    }
    cout<<"The sum of the digits is "<<sum;
    return 0;
}