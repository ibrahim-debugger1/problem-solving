class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int sol = 0, l = 0, n = nums.size(), r = n - 1;
        if (n > 1 && nums[n - 1] > nums[n - 2])
            sol = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (mid != 0 && mid != n - 1) {
                int a = nums[mid + 1], b = nums[mid - 1];
                if (nums[mid] > a && nums[mid] > b)
                    sol = mid;
                if (a == b || a > b)
                    l = mid + 1;
                else if (a < b)
                    r = mid - 1;
            } else {
                if (mid == 0 && n > 2) {
                    if (nums[1] > nums[0] && nums[1] > nums[2])
                        sol = 1;
                } else if (mid == n - 1 && n > 2) {
                    if (nums[n - 2] > nums[n - 1] && nums[n - 2] > nums[n - 3])
                        sol = n - 2;
                }
                break;
            }
        }
        return sol;
    }
};