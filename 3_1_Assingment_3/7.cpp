#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the point:";
    cin>>x>>y;
    if(x==0 && y!=0){
        cout<<"Y-Axis.";
    }
    else if(y==0 && x!=0){
        cout<<"X-Axis.";
    }
    else if(x==0 && y==0){
        cout<<"Origin.";
    }
    else{
        cout<<"X-Y plane.";
    }
    return 0;
}