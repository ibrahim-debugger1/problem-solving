vector<vector<int>> dp;
vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
	for (int i = 0; i < mat.size(); i++) {
		vector<int>temp;
		for (int j = 0; j < mat[0].size(); j++) {
			temp.push_back(INT_MAX - 10000);
		}
		dp.push_back(temp);
	}
	for (int i = 0; i < mat.size(); i++) {
		for (int j = 0; j < mat[0].size(); j++) {
			if (mat[i][j] == 0) {
				dp[i][j] = 0;
				continue;
			}
			int top = INT_MAX / 2, left = INT_MAX / 2;
			if (i - 1 >= 0)
				top = dp[i - 1][j];
			if (j - 1 >= 0)
				left = dp[i][j - 1];
			dp[i][j] = min(top, left) + 1;
		}
	}
	for (int i = mat.size() - 1; i >= 0; i--) {
		for (int j = mat[0].size() - 1; j >= 0; j--) {
			if (mat[i][j] == 0) {
				dp[i][j] = 0;
				continue;
			}
			int right = INT_MAX / 2, down = INT_MAX / 2;
			if (i + 1 < mat.size())
				down = dp[i + 1][j];
			if (j + 1 < mat[0].size())
				right = dp[i][j + 1];
			dp[i][j] = min(dp[i][j], min(down, right) + 1);
		}
	}
	return dp;
}