#include<bits/stdc++.h>
using namespace std;
const long long N = 2e5 + 4;
long long cnt[N];
long long n, m;
bool check(long long t) {
	long long have = 0, need = 0;
	for (long long i = 1; i <= n; i++) {
		if (t >= cnt[i])
			have += (t - cnt[i]) / 2;
		else
			need += (cnt[i] - t);
	}
	return need <= have;
}

long long solve() {
	long long l = 1, r = N, sol = 0;
	while (l <= r) {
		long long mid = (l + r) / 2;
		if (check(mid)) {
			sol = mid;
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	return sol;
}
int  main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		memset(cnt, 0, sizeof cnt);
		for (long long i = 0; i < m; i++) {
			long long a;
			cin >> a;
			cnt[a]++;
		}
		cout << solve() << endl;
	}
	return 0;
}
