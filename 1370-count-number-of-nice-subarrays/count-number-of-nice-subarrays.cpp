class Solution {
public:
    int lessEqual(vector<int>& nums, int k) {
        if (k < 0) return 0;
        int l = 0;
        int r = 0;
        int sum = 0;
        int count = 0;
        while (r < nums.size()) {
            if(nums[r]%2 !=0){
                sum++;
            }
            while (sum > k) {
                if(nums[l]%2 !=0){
                    sum--;
                }
                l++;
            }
            count += r - l + 1;
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
         return lessEqual(nums, k) - lessEqual(nums, k - 1);
    }
};