#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first student's marks:";
    cin>>a;
    cout<<"Enter the second student's marks:";
    cin>>b;
    cout<<"Enter the third student's marks:";
    cin>>c;
    if (a <= b && a <= c)
 cout << "A scores the least marks";
 else if (b <= a && b <= c)
 cout << "B scores the least marks";
 else
 cout << "C scores the least marks";
    return 0;
}