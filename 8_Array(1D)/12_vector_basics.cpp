#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={9,19,29,39,49,59}; //you need not mantion size;
    // v.push_back(9);
    // v.push_back(19);
    // v.push_back(29);
    // v.push_back(39);
    // v.push_back(49);
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<v[4]<<" "<<endl;
    cout<<"Size is: "<<v.size()<<endl;
     cout<<"Capacity is: "<<v.capacity();
    return 0;
}