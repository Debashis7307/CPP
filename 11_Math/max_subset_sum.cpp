#include<iostream>
#include<climits>
using namespace std;

int max_subset_sum(int a[], int n) {
  int dp[n];
  dp[0] = max(0, a[0]);
  if (n == 1) {
    return dp[0];
  }
  dp[1] = max(dp[0], a[1]);
  for (int i = 2; i < n; ++i) {
    dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
  }
  return dp[n - 1];
}

int main() {
	cout << "Enter the size of array" << endl;
	int n;
  cin >> n;
  int a[n];
  cout << "Enter the elements of array" << endl;
  for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int ans =0;
  int max_el= INT_MIN;
  int count =0;
  for(int i =0;i<n;i++){
    if(a[i]>max_el){
      max_el = a[i];
      count=1;
    }
    else if(a[i]==max_el){
      count++;
    }
    ans=max(ans,count);
  }
  cout<<"The maximum subset sum is: ";
  cout << ans;
	return 0;
}