bool isPalindrome(string s) {
	string new_s = "";
	for (int i = 0; i < s.size(); i++) {
		char c = tolower(s[i]);
		if (isalpha(c) || isdigit(c))
			new_s += c;
	}
	int l = 0, r = new_s.size() - 1;
	while (l < r) {
		if (new_s[l] != new_s[r])
			return false;
		l++; r--;
	}
	return true;
}