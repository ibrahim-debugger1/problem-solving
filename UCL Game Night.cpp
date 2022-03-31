/*
the idea is you brute force on the height and makes a binary search on the width
and every time we try to see if this width is valid we have to spend at most n^2
so the total complexity is O(logn*n^3) and you make a thing that looks like a 
the cumulative sum on the grid so you can know how many 1's on the rectangle in O(1)
which is a great thing 
*/
#include <bits/stdc++.h>
using namespace std;
int n,m,k;
int const N=105;
int arr[N][N];
  bool valid_width(int h,int w){
    for(int i=h-1;i<n;i++){
      for(int j=w-1;j<m;j++){
        int x=arr[i][j];
        if(i!=h-1) x-=arr[i-h][j];
        if(j!=w-1) x-=arr[i][j-w];
        if(i!=h-1 && j!=w-1) x+=arr[i-h][j-w];
        if(x<=k) return true;
      }
    }
    return false;
  }
 int binary_search(int h){
  int l=1,r=m;
  while(l<r){
    int mid=(l+r+1)/2;
    if(valid_width(h,mid))
      l=mid;
    else
      r=mid-1;
  }
  return l;
 }
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
      cin>>n>>m>>k;
      memset(arr,0,sizeof arr);
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cin>>arr[i][j];
          if(i!=0) arr[i][j]+=arr[i-1][j];
          if(j!=0) arr[i][j]+=arr[i][j-1];
          if(i!=0 && j!=0) arr[i][j]-=arr[i-1][j-1];
        }
      }
      int ans=0;
      for(int h=1;h<=n;h++)
        ans=max(ans,h*binary_search(h));
      cout<<ans<<endl;
    }
      return 0;
    }