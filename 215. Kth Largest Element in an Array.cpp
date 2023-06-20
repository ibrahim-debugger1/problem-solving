class Solution {
public:
    int arr[30005];
    int findKthLargest(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++)
            arr[nums[i] + 10000]++;
        for (int i = 10000; i < 10105; i++)
            cout << arr[i] << " ";
        int c = 0;
        for (int i = 30004; i >= 0; i--) {
            if (arr[i] != 0)
                c += arr[i];
            if (c >= k)
                return i - 10000;

        }
        return 0;
    }
};