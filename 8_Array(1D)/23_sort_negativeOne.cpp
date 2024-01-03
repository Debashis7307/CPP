#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>& u){
    int n=u.size();
   int i=0;
   int j=n-1;
   while(i<j){
    if(u[i]<0) i++;
   else if(u[j]>1) j--;
    // if(i>j) break;
    else if(u[i]>1 && u[j]<0){
       int tem=u[i];
       u[i]=u[j];
       u[j]=tem;
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

    sort(v);

    cout<<"Now the array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// bool comp(int a, int b)
// {
//     return (a < 0 && b > 0);
// }

// int main()
// {
//     int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
//     int n = sizeof(arr) / sizeof(arr[0]);

//     sort(arr, arr + n, comp);

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }