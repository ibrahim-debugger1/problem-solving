int ve[22][22];
vector<vector<int>> generateMatrix(int n) {
	memset(ve, -1, sizeof ve);
	rec(n, 0, 0, false, 1);
	vector<vector<int>>sol;
	for (int i = 0; i < n; i++) {
		vector<int>temp;
		for (int j = 0; j < n; j++) {
			temp.push_back(ve[i][j]);
		}
		sol.push_back(temp);
	}
	return sol;
}
void rec(int n, int i, int j, bool flag, int count) {
	if (i == n || i < 0 || j == n || j < 0 || ve[i][j] != -1) {
		flag = false;
		return ;
	}

	if (flag) {
		ve[i][j] = count;
		rec(n, i - 1, j, true, count + 1);
	}

	ve[i][j] = count;
	rec(n, i, j + 1, false, count + 1);
	rec(n, i + 1, j, false, count + 1);
	rec(n, i, j - 1, false, count + 1);
	rec(n, i - 1, j, true, count + 1);
	return ;
}
