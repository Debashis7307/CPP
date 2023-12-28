#include<iostream>
using namespace std;
int main(){
int n,lastDegit,sum=0;
cout<<"ENTER A NUMBER:";
cin>>n;
while(n>0){
    lastDegit=n%10;
        if(lastDegit%2==0){
            sum+=lastDegit;
        }
    n/=10;
}
cout<<"The sum of the evev degits is: "<<sum<<endl;
    return 0;
}
