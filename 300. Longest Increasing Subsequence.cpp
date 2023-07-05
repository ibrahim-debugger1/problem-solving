class Solution {
public:
    int dp[2600];
    int lengthOfLIS(vector<int>& nums) {
        for (int i = 0; i < 2600; i++)
            dp[i] = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] < nums[j])
                    dp[i] = max(dp[i], 1 + dp[j]);

            }
        }
        int ma = 1;
        for (int i = 0; i < nums.size(); i++) {
            cout << dp[i] << " ";
            ma = max(ma, dp[i]);
        }
        return ma;
    }
};