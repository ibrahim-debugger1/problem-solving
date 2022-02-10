//https://cses.fi/problemset/task/1637/


#include <bits/stdc++.h>
using namespace std;
int com(int temp){
  int x=INT_MIN;
  while(temp>0){
    x=max(x,temp%10);
    temp/=10;
  }
  return x;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    #endif
    int n,count=0;
    cin>>n;
    while(n!=0){
      count++;
      n-=(com(n));
    }
    cout<<count<<endl;
      return 0;
    }