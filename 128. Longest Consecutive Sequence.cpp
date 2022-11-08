int longestConsecutive(vector<int>& nums) {
    unordered_set <int> se;
    for (int i = 0; i < nums.size(); i++)
        se.insert(nums[i]);
    int longest = 0;
    for (auto i : se) {
        int count = 1, curr = i;
        if (se.find(curr - 1) == se.end()) {
            while (se.find(curr + 1) != se.end()) {
                curr += 1;
                count += 1;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}