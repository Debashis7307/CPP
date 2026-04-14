#include<bits/stdc++.h>
using namespace std;
//Memoization approach to find the nth Fibonacci number->top down approach
int fib(int n,vector<int> &dp){
  if(n<=1) return n;
  if(dp[n]!=-1) return dp[n];
  return dp[n]=fib(n-1,dp)+fib(n-2,dp);
}

//Bottom up approach to find the nth Fibonacci number->tabulation approach
int fib2(int n){
  vector<int> dp(n+1,-1);
  dp[0]=0;
  dp[1]=1;
  for(int i=2;i<=n;i++){
    dp[i]=dp[i-1]+dp[i-2];
  }
  return dp[n];
}

int main(){
  int n;
  cin>>n;

  vector<int> dp(n+1,-1);
  int ans=fib(n,dp);
  cout<<"The "<<n<<"th Fibonacci number is: "<<ans<<endl;
  int ans2=fib2(n);
  cout<<"The "<<n<<"th Fibonacci number is: "<<ans2<<endl;
  return 0;
}