#include<bits/stdc++.h>
using namespace std;

int  main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long t;
	cin >> t;
	while (t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if (a + b + c + d == 4)
			cout << "2" << endl;
		else if (a + b + c + d > 0)
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
	return 0;
}
