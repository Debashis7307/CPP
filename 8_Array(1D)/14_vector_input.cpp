#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     cout<<"The array is : ";
//     for(int i=0;i<n;i++){
//         cout<<v.at(i)<<" ";
//     }
//     return 0;
// }

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
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}