class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        for(int i= 0;i<n;i++){
            nums.push_back(nums[i]);
        }
         vector <int> v;
        stack <int> st;
        n = nums.size();
        for(int i = n-1;i>=0;i--){
            if(st.empty()){v.push_back(-1); st.push(nums[i]);}
            else{
                while(!st.empty()){
                    if(st.top()>nums[i]){
                        v.push_back(st.top());
                        st.push(nums[i]);
                        break;
                    }
                    else{
                        st.pop();
                        if(st.empty()){
                            v.push_back(-1);
                            st.push(nums[i]);
                            break;
                        }
                    }
                }

            }
        }

        reverse(v.begin(),v.end());
          n = nums.size()/2;
        vector <int> ans(n);
        for(int i = 0;i<n;i++){
            ans[i] = v[i];
        }
      
       return ans;
    }
};