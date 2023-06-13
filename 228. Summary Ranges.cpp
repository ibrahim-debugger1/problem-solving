class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> sol;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i + 1 < n && nums[i + 1] == nums[i] + 1) {
                string temp = "";
                temp += to_string(nums[i]);
                temp += "->";
                while (i + 1 < n && nums[i + 1] == nums[i] + 1) {
                    i++;
                }
                temp += to_string(nums[i]);
                sol.push_back(temp);
            } else {
                string t = "";
                t += to_string(nums[i]);
                sol.push_back(t);
            }
        }
        return sol;
    }
};