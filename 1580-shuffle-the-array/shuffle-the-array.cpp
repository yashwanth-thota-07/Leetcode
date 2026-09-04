class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> v1(n);
         vector <int> v2;
          vector <int> v3;
          vector<int> v = nums;
          for(int i = 0;i<n;i++){
            v1[i] = nums[i];//0 1 2 3 4 5 
          }
          for(int i = n;i<2*n;i++){
            v2.push_back(nums[i]);
          }
          for(int i = 0;i<n;i++){
            v3.push_back(v1[i]);
            v3.push_back(v2[i]);
          }

        return v3;
    }
};