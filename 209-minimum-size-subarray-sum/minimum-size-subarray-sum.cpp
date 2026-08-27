class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int mint = INT_MAX;
        int sum = 0;
        while(r<n){
            sum = sum + nums[r];
            while(sum>=target){
                mint = min(mint,r-l+1);
                sum = sum - nums[l];
                l++;
            }
            
            r++;
        }
        if(mint==INT_MAX){return 0;}
        return mint;
    }
};