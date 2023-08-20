vector<vector<int>>sol;
void rec(vector<vector<int>>& graph, int curr, int target, vector<int> temp) {
    if (curr == target) {
        temp.push_back(target);
        sol.push_back(temp);
        return ;
    }
    if (empty(graph[curr]))
        return ;
    for (int i = 0; i < graph[curr].size(); i++) {
        temp.push_back(curr);
        rec(graph, graph[curr][i], target, temp);
        temp.pop_back();
    }
}
vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    int target = graph.size() - 1;
    rec(graph, 0, target, {});
    return sol;
}