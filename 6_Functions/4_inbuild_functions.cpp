#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter two number:";
    cin>>x>>y;
    cout<<"Minimum number is: "<<min(x,y)<<endl;
    cout<<"Maximum number is: "<<max(x,y)<<endl;
    cout<<"SquareRoot of maximum number: "<<sqrt(max(x,y))<<endl;
    
    return 0;
}