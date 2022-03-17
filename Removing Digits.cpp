  //remove one's that are not connected to a border 
  #include <bits/stdc++.h>
  using namespace std;
  int n;
  bool visit[1000][1000];
  int arr[1000][1000];
  void dfs(int i,int j){
    if(i<0 || i>=n || j<0 || j>=n || arr[i][j]==0 || visit[i][j])
      return;
    visit[i][j]=true;
    dfs(i+1,j);dfs(i,j+1);dfs(i-1,j);dfs(i,j-1);
  }
  int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    cin>>n;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>arr[i][j];
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if((i==0 || i==n-1 || j==0 || j==n-1) && (arr[i][j]==1))
          dfs(i,j);
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(arr[i][j]==1 && visit[i][j]==false)
          arr[i][j]=0;
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
  }
