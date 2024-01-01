#include<iostream>
using namespace std;
float area(int x){
 float area, pi;
 pi=3.14159;
 area=pi*x*x;
 return area;
}
int main(){
 int r;
 cout<<"Enter the radius:";
 cin>>r;
 cout<<"The area of the circle is: "<<area(r);   
}