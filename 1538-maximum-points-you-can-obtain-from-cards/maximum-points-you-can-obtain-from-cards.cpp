class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
      int sum = 0;
      int n = cardPoints.size();
      int maxt = INT_MIN;
      for(int i = 0;i<=k-1;i++){
        sum = sum + cardPoints[i];
      }
      maxt = max(maxt,sum);
      int rt = n-1;
      for(int i = k-1;i>=0;i--){
        sum = sum - cardPoints[i];
        sum = sum + cardPoints[rt];
        rt--;
        maxt = max(maxt,sum);
      }
      return maxt;
    }
};