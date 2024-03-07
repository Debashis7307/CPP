#include <iostream>
#include <vector>
using namespace std;
int main()
{
  //process:-1
  int n;
  cout << "Enter the number : ";
  cin >> n;
  //creat the two D vector space 
  vector<vector<int>> v;
  for(int i = 1; i<=n;i++){
    vector<int> a(i);
    v.push_back(a);
  }
  // generating the pascal triangla
  for(int i =0;i<n;i++){
    for(int j = 0; j<=i;j++){
      if (j==0 || j==i){
        v[i][j]=1;
      }
      else{
        v[i][j]= v[i-1][j]+v[i-1][j-1];
      }
    }
  }

  //print the elements of pascal triangle
  for(int i =0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }

  // //process:-2
  // int numRows = 5;
  // vector<vector<int>> result;
  //       vector<int> v;
  //       for(int i=1 ;i<=numRows;i++){
  //           v.clear();
  //           for(int  j=1 ; j<=i;j++){
  //               if(j==1 || j==i)
  //                    v.push_back(1);
  //               else
  //                   v.push_back(result[i-1-1][j-1-1]+result[i-1-1][j-1]);
  //           }
  //           result.push_back(v);
  //       }
  //      for(int i =0;i<5;i++){
  //    for(int j=0;j<=i;j++){
  //      cout<<result[i][j]<<" ";
  //    }
  //    cout<<endl;
  // }

  return 0;
}