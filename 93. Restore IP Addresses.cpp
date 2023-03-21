class Solution {
public:
    vector<string>sol;
    bool check(string t) {
        bool flag = true;
        for (int i = 0; i < t.size(); i++) {
            string temp = "";
            while (i < t.size() && t[i] != '.') {
                if (t[i] != '#')
                    temp += t[i];
                i++;
            }
            if (temp.size() > 1 && temp[0] == '0')
                flag = false;
            long long f = stoll(temp);
            if (f < 0 || f > 255)
                flag = false;
        }
        return flag;
    }
    void handle(string t) {
        string temp = "";
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == '#')
                continue;
            temp += t[i];
        }
        if (std::find(sol.begin(), sol.end(), temp) == sol.end())
            sol.push_back(temp);
    }
    void back_track(string t, int num) {
        if (num == 3) {
            if (check(t)) {
                handle(t);
                return ;
            }
            return ;
        }
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == '#') {
                t[i] = '.';
                back_track(t, num + 1);
                t[i] = '#';
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        string temp = "";
        temp += s[0];
        for (int i = 1; i < s.size(); i++) {
            temp += '#';
            temp += s[i];
        }
        back_track(temp, 0);
        return sol;
    }
};