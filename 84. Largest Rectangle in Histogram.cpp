int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>>st;
        st.push({0,-1});
        int i=0,sol=0;
        for(;i<heights.size();i++){
            if(st.size()==1 || heights[i]>=st.top().first){
                st.push({heights[i],i});
            }else{
                while(st.size()!=1 && heights[i]<st.top().first){
                    int curr=st.top().first;
                    st.pop();
                    if(st.size()!=1)
                        sol=max(sol,curr*(i-st.top().second-1));
                    else
                        sol=max(sol,curr*(i));
                }
                st.push({heights[i],i});
            }
        }
        while(st.size()!=1){
            int curr=st.top().first;
            if(st.size()==2){
                sol=max(sol,curr*(i));
                st.pop();
                continue;
            }
            st.pop();
            if(!st.empty())
                    sol=max(sol,curr*(i-st.top().second-1));
            else
                    sol=max(sol,curr*(i));
        }
        return sol;
    }