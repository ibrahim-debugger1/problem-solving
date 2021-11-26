int left_max[20005],right_max[20005];
    int trap(vector<int>& height) {
        int n=height.size();
        left_max[0]=height[0];
        for(int i=1;i<n;i++){
            left_max[i]=max(height[i],left_max[i-1]);
        }
        right_max[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            right_max[i]=max(height[i],right_max[i+1]);
        }
        int sol=0;
        for(int i=1;i<n-1;i++){
            sol+=min(left_max[i],right_max[i])-height[i];
        }
        return sol;
    }