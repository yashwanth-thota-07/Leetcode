class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> v1;
        vector<int> v2;
        int maxt = INT_MIN;
        int mint = INT_MAX;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            maxt = max(maxt, nums[i]);
            v1.push_back(maxt);
        }
        for (int i = n - 1; i >= 0; i--) {
            mint = min(mint, nums[i]);
            v2.push_back(mint);
        }
        reverse(v2.begin(), v2.end());
        for (int i = 0; i < n; i++) {
            if (v1[i] - v2[i] <= k) {
                return i;
            }
        }
        return -1;
    }
};