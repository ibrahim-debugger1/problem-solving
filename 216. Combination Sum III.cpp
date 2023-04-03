class Solution {
public:
    vector<vector<int>>sol;
    void back_track(vector<int>temp, int k, int n, int count, int ii) {
        if (count == k) {
            if (accumulate(temp.begin(), temp.end(), 0) == n)
                sol.push_back(temp);
            return ;
        }

        for (int i = ii; i <= 9; i++) {
            temp.push_back(i);
            back_track(temp, k, n, count + 1, i + 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        back_track({}, k, n, 0, 1);
        return sol;
    }
};