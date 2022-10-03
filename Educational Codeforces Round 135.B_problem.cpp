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
		for (int i = n - 2; i >= 1; i--) {
			sol.push_back(i);
		}
		sol.push_back(n - 1);
		sol.push_back(n);
		if (n % 2 == 1)
			swap(sol[n - 4], sol[n - 5]);
		for (int i = 0; i < sol.size(); i++)
			cout << sol[i] << " ";
		cout << endl;
	}
	return 0;
}
