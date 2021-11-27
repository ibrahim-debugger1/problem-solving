    //Time complexity= O(n) ,Space complexity=O(1) 
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1,left_max=height[0],right_max=height[height.size()-1],sol=0;
        while(l<r){
            if(right_max>=left_max){
                sol+=min(left_max,right_max)-height[l];
                l++;
                left_max=max(left_max,height[l]);
            }else{ 
                sol+=min(left_max,right_max)-height[r];
                r--;
                right_max=max(right_max,height[r]);
            }
        }
        return sol;
    }