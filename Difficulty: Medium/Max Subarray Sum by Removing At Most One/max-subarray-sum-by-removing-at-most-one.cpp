class Solution {
  public:
    int maxSumSubarray(vector<int>& arr) {
        // code here
    int n=arr.size();
    vector<int>pref(n);
    vector<int>suff(n);
    pref[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        pref[i]=max(arr[i]+pref[i-1],arr[i]);
    }
    suff[n-1]=arr[n-1];
     for(int i=n-2;i>=0;i--)
    {
        suff[i]=max(arr[i]+suff[i+1],arr[i]);
    }
    int ans=*max_element(pref.begin(),pref.end());
    
    for(int i=1;i<n-1;i++)
    {
        ans=max(ans,pref[i-1]+suff[i+1]);
    }
    return ans;
    }
};