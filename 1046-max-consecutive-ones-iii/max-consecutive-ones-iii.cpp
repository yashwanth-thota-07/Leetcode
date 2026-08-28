class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int subarr = 0;
        int maxt = INT_MIN;
        int count0 = 0;
        int l =0;
        int r =0;
        while(r<n){
            subarr++;
            if(nums[r]==0){count0++;}
            while(count0>k){
                if(nums[l]==0){count0--;}
                subarr--;
                l++;
            }
            maxt=max(maxt,subarr);
            r++;
        }
        return maxt;
    }
};