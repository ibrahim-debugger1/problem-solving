#include<bits/stdc++.h>
using namespace std;

int  main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long n, q;
	cin >> n >> q;
	long long dp[n + 3];
	memset(dp, 0, sizeof dp);
	vector<long long>v;
	v.push_back(0);
	for (long long i = 1; i <= n; i++) {
		long long a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	for (long long i = 1; i <= n; i++) {
		dp[i] = v[i] + dp[i - 1];
	}
	while (q--) {
		long long x, y;
		cin >> x >> y;
		long long temp = n - (x - y);
		cout << dp[temp] - dp[temp - y] << endl;
	}
	return 0;
}
