class Solution {
public:
    int arr[103];
    int getMaximumGenerated(int n) {
        arr[0] = 0; arr[1] = 1;
        int sol = 1;
        for (int i = 2; i <= n; i += 2) {
            arr[i] = arr[i / 2];
            arr[i + 1] = arr[i / 2] + arr[i / 2 + 1];
            if (i + 1 <= n)
                sol = max(sol, max(arr[i], arr[i + 1]));
            else
                sol = max(sol, arr[i]);
        }
        return (n == 0) ? 0 : sol;
    }
};