#include<iostream>
using namespace std;
int main(){
    int a=1;
    int b=1;
    int sum=0;
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    for(int i=1;i<=n-2;i++){   //febonacci means sum of previous two number...
      sum=a+b;
        a=b;
        b=sum;
    }
    cout<<n<<" fibonacci number is "<<b<<endl;
    return 0;
}