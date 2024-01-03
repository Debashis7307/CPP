#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<int>& a){  //passing vector to function by using &...
int i= (a.size())/2;
a.at(i)=0;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the size:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"The array is: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl<<"After change:"<<endl;
    change(v);
for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}