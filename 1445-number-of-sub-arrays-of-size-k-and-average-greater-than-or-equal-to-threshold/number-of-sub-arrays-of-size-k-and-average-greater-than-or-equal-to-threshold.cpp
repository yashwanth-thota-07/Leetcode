class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
         int n = arr.size();
        int l = 0;
        int r = 0;
        long long sum = 0;
        int count = 0;
        while(r<n){
            sum = sum  + arr[r];
            if(r-l+1 == k){
                if(sum/k >= threshold){count++;}
                sum = sum - arr[l];
                l++;
            }
            r++;
        }
     return count;
    }
};