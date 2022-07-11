string addBinary(string a, string b) {
	if (a.size() > b.size())
		return addBinary(b, a);
	int p1 = a.size() - 1, p2 = b.size() - 1;
	char carry = '0';
	string sol = "";
	while (p1 >= 0 && p2 >= 0) {
		if (a[p1] == '0' && b[p2] == '0') {
			sol.push_back(carry);
			carry = '0';
		} else if (a[p1] == '1' && b[p2] == '1') {
			if (carry == '0') {
				sol.push_back('0');
				carry = '1';
			} else {
				sol.push_back('1');
				carry = '1';
			}
		} else {
			if (carry == '0') {
				sol.push_back('1');
			} else {
				sol.push_back('0');
			}
		}
		p1--; p2--;
	}
	//cout<<sol<<endl;
	while (p2 >= 0) {
		if (carry == '1' && b[p2] == '1') {
			sol.push_back('0');
		} else if (b[p2] == '0' && carry == '0') {
			sol.push_back('0');
		} else {
			sol.push_back('1');
			carry = '0';
		}
		p2--;
	}
	//cout<<sol<<endl;
	if (carry == '1')
		sol.push_back('1');
	reverse(sol.begin(), sol.end());
	return sol;
}
