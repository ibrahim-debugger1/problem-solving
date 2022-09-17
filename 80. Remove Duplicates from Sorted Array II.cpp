int removeDuplicates(vector<int>& nums) {
	int inf = INT_MAX, n = nums.size();
	if (n == 1)
		return 1;
	for (int i = 0; i < n;) {
		if (i < n - 2 && nums[i] == nums[i + 1] && nums[i + 1] == nums[i + 2]) {
			int temp = nums[i];
			i += 2;
			while (i < n && nums[i] == temp) {
				nums[i] = inf;
				i++;
			}
		} else {
			i++;
		}
	}
	sort(nums.begin(), nums.end());
	int k = 0;
	for (int i = 0; i < n; i++)
		if (nums[i] != inf)
			k++;
	return k;
}