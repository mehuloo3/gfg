//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        unordered_map<int,int>map;
        vector<int>ans;
        for(auto i:arr)
        {
            map[i]++;
        }
        for(auto i:map)
        { 
            if(i.second>1)
            {
                ans.push_back(i.first);
            }
            
        }
      int miss;
      for(int i=1;i<=arr.size();i++)
      {
            auto it=map.find(i);
            if(it==map.end())
                miss=i;
        }
      ans.push_back(miss);
      return ans;  
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends