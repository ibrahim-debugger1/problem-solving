//https://cses.fi/problemset/task/1635


#include <bits/stdc++.h>
using namespace std;
int const MOD=1e9+7;
int n,x;
int arr[200];
long long dp[1000002];
int rec(int rem){
  if(rem==0)
    return 1;
  if(rem<0)
    return 0;
  if(dp[rem]!=-1)
    return dp[rem];
  dp[rem]=0;
  for(int i=0;i<n;i++){
    dp[rem]=(dp[rem]+rec(rem-arr[i]))%MOD;
  }
  return dp[rem];
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    #endif
    cin>>n>>x;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    memset(dp,-1,sizeof dp);
    printf("%d\n",rec(x));
      return 0;
    }