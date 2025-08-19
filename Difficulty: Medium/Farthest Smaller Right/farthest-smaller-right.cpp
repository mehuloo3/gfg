class Solution {
  public:
    vector<int> farMin(vector<int>& arr) {
        // code here
     vector<pair<int,int>>v;
     for(int i=0;i<arr.size();i++)
     {
         v.push_back({arr[i],i});
     }
     sort(v.begin(),v.end());
     int m=v[0].second;
     vector<int>ans(arr.size(),-1);
     for(int i=1;i<arr.size();i++)
     {
         if(m>v[i].second)
         {
             ans[v[i].second]=m;
         }
         m=max(m,v[i].second);
     }
     return ans;
    }
};