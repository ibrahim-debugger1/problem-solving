 int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>>st;
        int i=0,sol=0;
        for(;i<heights.size();i++){
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
