#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& a){
    cout<<"Now the array is:";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reversePart(int i, int j, vector<int>& v){
while(i<=j){
    int tem=v[i];
    v[i]=v[j];
    v[j]= tem; 
    i++;
    j--;
}
  return;
}

int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
     vector<int> v;
     cout<<"Enter the element of the array:";
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
     }
     display(v);
     int s;
     cout<<"How much stpes we have to rotate:";
     cin>>s;
    //  n=v.size();
    if(s>n) s=s%n;
     reversePart(0,n-s-1,v);
      reversePart(n-s,n-1,v);
       reversePart(0,n-1,v);
     display(v);
    
}