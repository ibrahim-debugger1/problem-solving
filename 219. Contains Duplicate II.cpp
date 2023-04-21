class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int sol = INT_MAX;
        map<int, int>ma;
        for (int i = 0; i < nums.size(); i++) {
            int c = nums[i];
            if (ma.find(c) != ma.end()) {
                sol = min(sol, i - ma[c]);
                ma[c] = i;
            } else {
                ma[c] = i;
            }
        }
        if (sol <= k)
            return true;
        else
            return false;
    }
};