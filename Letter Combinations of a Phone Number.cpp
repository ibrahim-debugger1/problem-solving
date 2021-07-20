class Solution {
public:
    string v[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits.size() == 0)
            return ans;
        possibleLetterCombinations(0, digits, ans, "");
        return ans;
    }
    void possibleLetterCombinations(int ind, string digits, vector<string>& ans, string temp)
    {
        if (ind == digits.size()) {
            ans.push_back(temp);
            return;
        }
        string s = v[digits[ind] - '0'];
        for (auto i : s) {
            possibleLetterCombinations(ind + 1, digits, ans, temp + i);
        }
        return;
    }
};