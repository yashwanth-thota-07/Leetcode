class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        int count = 0;
        long long sum = 0;
        string s;
        int x1, x2;
        for (int i = 0; i < n; i++) {
            sum = 0;
            for (int j = i; j < n; j++) {
                sum = sum + nums[j];
                x1 = sum % 10;
                long long temp = sum;
                while (temp >= 10) {
                    temp = temp / 10;
                }
                x2 = temp;
                if (x1 == x2 && x1 == x) {
                    count++;
                }
            }
        }
        return count;
    }
};