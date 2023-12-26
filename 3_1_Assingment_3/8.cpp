#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3,slop1,slop2;
    cout<<"Enter the first point:";
    cin>>x1>>y1;
    cout<<"Enter the second point:";
    cin>>x2>>y2;
    cout<<"Enter the third point:";
    cin>>x3>>y3;
    slop1=(y2-y1)/(x2-x1);
    slop2=(y3-y2)/(x3-x2);
    if(slop1==slop2){
        cout<<"All 3 points lie on the same line.";
    }
    else{
         cout<<"All 3 points do not lie on the same line.";
    }
    return 0;
}