#include<iostream>
#include<vector>
using namespace std;
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
    bool flage=true;
    cout<<"Is the given array a palindrome? "<<endl;
   for(int i=0;i<n;i++){
    if(v[i]!=v[n-i-1]) {
        flage=false;
      break;
    }
    else flage = true;
   }
   if(flage==false) cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
    return 0;
}