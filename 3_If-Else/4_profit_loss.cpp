#include<iostream>
using namespace std;
int main(){
    int cell , cost;
    cout<<"Enter the cost price :";
    cin>>cost;
    cout<<"Enter the celling price :";
    cin>>cell;
    if(cell>cost){
        cout<<"Profit :"<<cell-cost;
    }
    else if(cost>cell){
        cout<<"Loss :"<<cost-cell;
    }
    else{
        cout<<"No profit,no loss";
    }
    return 0;
}