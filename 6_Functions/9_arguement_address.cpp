#include<iostream>
using namespace std;
void fun(int x, int &y){ //if we specify the respective address by &x then only it will be same.

cout<<"Address of x in other function: "<<&x<<endl;
     cout<<"Address of y in other function: "<<&y<<endl;
}
int main(){
    int x,y;
    cout<<"Address of x in main function: "<<&x<<endl;
     cout<<"Address of y in main function: "<<&y<<endl;
    fun(x,y);
     
}