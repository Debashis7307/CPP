#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(0);     // push_back is used for inserting element....
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
v.push_back(50);
v.push_back(60);

cout<<v.size()<<endl<<v.capacity()<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
v.pop_back();  // pop_back is used for deleting the last element....
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
v.insert(v.begin()+3,100);  //insert is used for inserting element...
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
v.erase(v.begin());   // erase is used for deleting any element...
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
v.clear();  // clear is used for deleting the all element of the array...
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
    return 0;
}