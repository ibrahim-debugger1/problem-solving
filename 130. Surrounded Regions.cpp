class Solution {
public:
    int arr[205][205];
    void rec(vector<vector<char>>& board,int i,int j,int n,int m){
        if(i>=n || j>=m || i<0 || j<0 || board[i][j]=='X' || arr[i][j]==1)
            return ;
        arr[i][j]=1;
        rec(board,i,j+1,n,m);
        rec(board,i+1,j,n,m);
        rec(board,i,j-1,n,m);
        rec(board,i-1,j,n,m);
        
        
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<205;i++){
            for(int j=0;j<205;j++){
                arr[i][j]=0;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && (i==0 || i==n-1 || j==0 || j==m-1))
                    rec(board,i,j,n,m);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==0 && board[i][j]=='O')
                    board[i][j]='X';
            }
        }
    }
};