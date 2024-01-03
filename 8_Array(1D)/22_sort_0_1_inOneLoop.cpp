#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int>& u){
    int n=u.size();
   int i=0;
   int j=n-1;
   while(i<j){
    if(u[i]==0) i++;
    if(u[j]==1) j--;
    if(i>j) break;
    if(u[i]==1 && u[j]==0){
        u[i]=0; u[j]=1;
        i++; j--;
    }
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

    sort01(v);

    cout<<"Now the array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}