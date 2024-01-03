#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int>& a,vector<int>& b){
    int n=a.size();
    int m=b.size();
    
    vector<int> res(m+n);
  
    int i=0; //v1
    int j=0; //v2
    int k=0; //res
    while(i<=n-1 && j<=m-1){
        if(a[i]<b[j]){
            res[k]=a[i];
            i++;
        }
        else {
            res[k]=b[j];
            j++;
        }
        k++;
    }
    //for remaining element....
    if(i==n){
        while(j<=m-1){
            res[k]=b[j];
            k++;
            j++;
        }
    }
    if(j==m){
        while(i<=n-1){
            res[k]=a[i];
            k++;
            i++;
        }
    }
    return res;
    // int m=nums1.size();
    //  int n=nums2.size();
    //  int i = m - 1; // Index for the last element of nums1
    // int j = n - 1; // Index for the last element of nums2
    // int k = m + n - 1; // Index for the last element of the merged array

    // while (i >= 0 && j >= 0) {
    //     if (nums1[i] > nums2[j]) {
    //         nums1[k] = nums1[i];
    //         i--;
    //     } else {
    //         nums1[k] = nums2[j];
    //         j--;
    //     }
    //     k--;
    // }

    // // If there are any remaining elements in nums2
    // while (j >= 0) {
    //     nums1[k] = nums2[j];
    //     j--;
    //     k--;
    // }
    // return nums1;

}

int main(){
    int m;
    cout<<"Enter the size of 1st array:";
    cin>>m;
    vector<int> v1;
    cout<<"Enter the elements:";
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    int n;
    cout<<"Enter the size of 2st array:";
    cin>>n;
    vector<int> v2;
     cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    vector<int> v=merge(v1,v2);
    cout<<"Now the array is: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}