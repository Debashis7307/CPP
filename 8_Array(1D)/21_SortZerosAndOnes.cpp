#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;

void sort01(vector<int>& u){
    int n=u.size();
    int no0=0;
    int no1=0;
    for(int i=0;i<n;i++){
        if(u[i]==0) no0++;
        else no1++;
    }
    for(int i=0;i<n;i++){
        if(i<no0) u[i]=0;
        else u[i]=1;
    }
}

int main(){
    int n;
    cout<<"Enter the size of the vector:";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Now the array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // sort(v.begin(),v.end());  this is a inbuild function....but without using we have to do sort...

    sort01(v);

    cout<<"Now the array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}