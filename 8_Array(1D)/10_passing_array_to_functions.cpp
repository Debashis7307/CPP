#include<iostream>
#include<climits>
using namespace std;
void display(int a[],int size){ //int* a
for(int i=0;i<=4;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}

void change(int b[],int size){ //int* b
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<=4;i++){
        if(b[i]>max) max=b[i];
    }
    for(int i=0;i<=4;i++){
        if(b[i]<min) min=b[i];
    }
    b[0]=max;b[4]=min;
    return;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"The size is: "<<size<<endl;
    display(arr,size);
    change(arr,size);
    display(arr,size);
    return 0;
}