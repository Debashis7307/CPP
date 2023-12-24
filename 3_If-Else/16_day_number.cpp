#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter day number:";
    cin>>x;
    switch(x){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Twesday";
        break;
        case 3:
        cout<<"Wednusday";
        break;
        case 4:
        cout<<"Thrusday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saterday";
        break;
        case 7:
        cout<<"Sunday";
        break;
default:
cout<<"Invalid number";
    }
return 0;
}