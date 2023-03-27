class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int>temp;
        int sol = 0, sum = 0;
        for (int i = 0; i < gas.size(); i++) {
            temp.push_back(gas[i] - cost[i]);
            sum += gas[i] - cost[i];
        }
        if (sum < 0)
            return -1;
        sum = 0;
        for (int i = 0; i < gas.size(); i++) {
            sum += temp[i];
            if (sum < 0) {
                sum = 0;
                sol = i + 1;
            }
        }
        return sol;
    }
};