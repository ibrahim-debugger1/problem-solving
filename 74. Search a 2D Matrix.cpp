//i used binary search algorithm so my complexity is O(log(n))
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0,r=matrix.size()-1,mid=0;
        while(l<=r){
           mid=(l+r)/2;
           if(matrix[mid][0]==target || matrix[mid][matrix[0].size()-1]==target)
               return true;
            else if(matrix[mid][0]<target && matrix[mid][matrix[0].size()-1]>target){
                break;
            }else if(matrix[mid][matrix[0].size()-1]<target){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        l=0;r=matrix[0].size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(matrix[mid][m]==target)
                return true;
            else if(matrix[mid][m]>target)
                r=m-1;
            else 
                l=m+1;
        }
        return false;
    }