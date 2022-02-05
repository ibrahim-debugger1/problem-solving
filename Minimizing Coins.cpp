//https://cses.fi/problemset/task/1634


#include <bits/stdc++.h>
using namespace std;
int const inf=1e9;
int n,x;
int arr[200],dp[2000000];
int rec(int rem){
  if(rem==0)
    return 0;
  if(rem<0)
    return inf;
  if(dp[rem]!=-1)
    return dp[rem];
  dp[rem]=inf;
  for(int i=n-1;i>=0;i--){
    dp[rem]=min(dp[rem],rec(rem-arr[i])+1);
  }
  return dp[rem];
 
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    #endif
    cin>>n>>x;
    memset(dp,-1,sizeof dp);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    int sol=rec(x);
    if(sol==inf)
      cout<<-1<<endl;
    else
      cout<<sol<<endl;
      return 0;
    }