class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sol = 0;
        long long a = 1;
        for (int i = 0; i < 32; i++) {
            int count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if ((nums[j] >> i) & 1) {
                    count++;
                }
            }
            if (count % 3 == 1) {
                sol += a;
            }
            a *= 2;
        }
        return sol;
    }
};