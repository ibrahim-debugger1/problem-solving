class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0, sum = 0, sol = INT_MAX;
        while (r < nums.size()) {
            sum += nums[r];
            while (l <= r && sum >= target) {
                sum -= nums[l];
                sol = min(sol, r - l + 1);
                l++;
            }


            r++;
        }
        if (sol != INT_MAX)
            return sol;
        return 0;
    }
};