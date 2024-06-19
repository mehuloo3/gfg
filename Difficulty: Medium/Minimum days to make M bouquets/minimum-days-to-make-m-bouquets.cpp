//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int possible(vector<int> &arr,int day,int m,int k)
  {
      int count=0,NoOfDay=0;
      for(int i=0;i<arr.size();i++)
      {
          if(arr[i]<=day)
          {
              count++;
          }
          else
          {
              NoOfDay+=(count/k);
              count=0;
          }
      }
      NoOfDay+=(count/k);
      if(NoOfDay>=m)
      return true;
      else
      return false;
  }
    int solve(int M, int K, vector<int> &bloomDay){
      // Code here
    //   long long v=M*K;
    //   if(v>bloomDay.size()) return -1;
    //   int mini=INT_MAX,maxi=INT_MIN;
    //   for(int i=0;i<bloomDay.size();i++)
    //   {
    //       mini=min(mini,bloomDay[i]);
    //       maxi=max(maxi,bloomDay[i]);
    //   }
      
    //   int start=mini;end=maxi;
    //   while(start<=end)
    //   {
    //       int mid=start+(end-start)/2;
    //       if(possible(bloomDay,mid,M,K))
    //       {
    //           end=mid-1;
    //       }
    //       else
    //       start=mid+1;
    //   }
    //   return start;
    long long val = M*1ll*K*1ll;
    int n = bloomDay.size(); 
    if (val > n) return -1; 
    int mini = INT_MAX, maxi = INT_MIN;
    for(int i= 0;i<n;i++)
    {
        mini = min(mini,bloomDay[i]);
        maxi = max(maxi,bloomDay[i]);
    }
         int start=mini,end=maxi;
        while(start<=end) 
        {
        int mid= start+(end-start)/2;
        if (possible(bloomDay,mid,M,K))
        {
            end=mid-1;
        }
        else start=mid+1;
    }
    return start;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}
// } Driver Code Ends