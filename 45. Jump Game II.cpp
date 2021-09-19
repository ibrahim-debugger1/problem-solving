//simple DP problem 
int jump(vector<int>& nums) {
        int arr[nums.size()];
        memset(arr,10000,sizeof arr);
        arr[0]=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1,count=0;count<nums[i] && j<nums.size();j++,count++){
                if(arr[j]==0)
                    arr[j]=arr[i];
                else
                   arr[j]=min(arr[j],arr[i]+1);
            }
        }
        for(int i=0;i<nums.size();i++)
            cout<<arr[i]<<"     ";
        return arr[nums.size()-1];
    }