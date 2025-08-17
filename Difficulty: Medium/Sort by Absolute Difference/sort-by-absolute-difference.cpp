class Solution {
  public:
    void rearrange(vector<int> &arr, int x) {
        // code here

        multimap<int,int>mp;
        vector<pair<int,int>>vec;
        vector<int>ans;
        int n=arr.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            mp.insert({abs(arr[i]-x),i});
        }
        for(auto i:mp)
        {
            v.push_back(arr[i.second]);
        }
        sort(vec.begin(),vec.end(),[](const pair<int,int> &a,const pair<int,int> &b)
        {
            return a.second< b.second;
        });
        int k=0;
        for(auto i:v)
        {
         arr[k++]=i;
         
        }
        // for(int i=0;i<ans.size();i++)
        // {
        //     cout<<ans[i]<<" ";
        // }
        // int i=0,j=0;
        // while(i<n and j<n)
        // {
        //     arr[i++]=ans[j++];
        // }
    }
};