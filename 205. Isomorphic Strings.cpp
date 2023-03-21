class Solution {
public:
    bool check(string s, string t) {
        map<char, char>ma;
        if (s.size() != t.size())
            return false;
        for (int i = 0; i < s.size(); i++) {
            if (ma.find(s[i]) != ma.end()) {
                if (ma[s[i]] != t[i])
                    return false;
            } else {
                ma[s[i]] = t[i];
            }
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
        return check(s, t) && check(t, s);
    }
};