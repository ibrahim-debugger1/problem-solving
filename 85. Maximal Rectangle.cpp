int dp[209];
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.size()==0)
            return 0;
        int row=matrix.size(),col=matrix[0].size(),sol=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]=='0')
                    dp[j]=0;
                else
                    dp[j]++;
            }
            sol=max(sol,largestRectangleArea(dp,col));
        }
        return sol;
    }
    int largestRectangleArea(int heights[],int n) {
        stack<pair<int,int>>st;
        int i=0,sol=0;
        for(;i<n;i++){
            if(st.empty() || heights[i]>=st.top().first){
                st.push({heights[i],i});
            }else{
                while(!st.empty() && heights[i]<st.top().first){
                    int curr=st.top().first;
                    st.pop();
                    if(!st.empty())
                        sol=max(sol,curr*(i-st.top().second-1));
                    else
                        sol=max(sol,curr*(i));
                }
                st.push({heights[i],i});
            }
        }
        while(!st.empty()){
            int curr=st.top().first;
            st.pop();
            if(!st.empty())
                    sol=max(sol,curr*(i-st.top().second-1));
            else
                    sol=max(sol,curr*(i));
        }
        return sol;
    }