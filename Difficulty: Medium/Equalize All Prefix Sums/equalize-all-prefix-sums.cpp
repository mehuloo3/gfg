class Solution {
  public:
    vector<int> optimalArray(vector<int> &arr) {
        // code here
         vector<int>ans(1);
         for(int i=1;i<arr.size();i++)
         {
             ans.push_back(ans[i-1]+arr[i]-arr[i/2]);
         }
         return ans;
    }
};