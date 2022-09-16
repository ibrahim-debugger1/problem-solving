#include<bits/stdc++.h>
using namespace std;

int  main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>sol;
		for (int i = 1; i <= n; i += 2) {
			int j = i;
			while (j <= n) {
				sol.push_back(j);
				j *= 2;
			}
		}

		cout << 2 << endl;
		for (int i = 0; i < sol.size(); i++)
			cout << sol[i] << " ";
		cout << endl;
	}
	return 0;
}
