vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    int a = newInterval[0], b = newInterval[1];
    intervals.push_back({a, b});
    sort(intervals.begin(), intervals.end());
    vector<vector<int>>ve;
    int i = 0;
    for (; i < intervals.size() - 1;) {
        if (intervals[i][1] < intervals[i + 1][0]) {
            ve.push_back({intervals[i][0], intervals[i][1]});
            i++;
        } else {
            int ma = intervals[i][1], mi = intervals[i][0];
            while (i < intervals.size() - 1 && ma >= intervals[i + 1][0]) {
                ma = max(ma, intervals[i + 1][1]);
                i++;
            }
            ve.push_back({mi, ma});
            i++;
        }
    }
    for (; i < intervals.size(); i++)
        ve.push_back({intervals[i][0], intervals[i][1]});
    return ve;
}