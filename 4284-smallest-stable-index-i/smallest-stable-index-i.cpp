class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==1 && 0<=k){
            return 0;
        }
        if(n==1 && 0 >=k){
            return -1;
        }

        for(int i = 0; i < n; i++){
            int maxt = INT_MIN;   
            int mint = INT_MAX;   
            for(int j = 0; j <= i; j++){
                maxt = max(maxt, nums[j]);
            }
            for(int s = i; s < n; s++){
                mint = min(mint, nums[s]);
            }
            if((maxt - mint) <= k){
                return i;
            }
        }
        return -1;
    }
};