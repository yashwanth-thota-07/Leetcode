class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map <char,int> mp;
        int l = 0;
        int r = 0;
        int maxt = 0;
        int length = 0;
        string subs = "";
        int count = 0;
        while(r<n){
            subs = subs+ s[r];
            mp[s[r]]++;
            count++;
          
            while(mp[s[r]]!=1){
                mp[subs[0]]--;
                subs.erase(subs.begin());
                count--;
            }
            length = count;
            maxt = max(maxt, length);
            r++;

        }
        return maxt;
    }
};