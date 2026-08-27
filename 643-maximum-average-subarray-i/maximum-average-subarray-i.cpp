class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        long long sum = 0;
        long long maxt = INT_MIN;
        while(r<n){
            sum = sum  + nums[r];
            if(r-l+1 == k){
                maxt = max(maxt,sum);
                sum = sum - nums[l];
                l++;
            }
            r++;
        }
        double ans = (double)maxt/k;
        return ans;
    }
};