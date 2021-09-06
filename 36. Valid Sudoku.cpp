//that was a great implementation question it took me about two hours to solve it
bool isValidSudoku(vector<vector<char>>& board) {
        map<int,int>ma;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int temp=(int)board[i][j]-49;
                if(temp>=0 && temp<9){
                    ma[temp]++;
                }
            }
            for(auto x:ma){
                if(x.second>1)
                    return false;
            }
            ma.clear();
        }
        ma.clear();
       for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int temp=(int)board[j][i]-49;
                if(temp>=0 && temp<9){
                    ma[temp]++;
                }
            }
            for(auto x:ma){
                if(x.second>1)
                    return false;
            }
            ma.clear();
        }
     vector<map<char,int>>ve(10);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int calc1=(i/3)*3,cal2=j/3;
                int temp=(int)board[i][j]-49;
                if(temp>=0 && temp<9){
                    ve[calc1+cal2][board[i][j]]++;
                }
            }
        }
        for(int i=0;i<9;i++){
            for(auto x:ve[i]){
                if(x.second>1)
                    return false;
            }
        }
        return true;
    }