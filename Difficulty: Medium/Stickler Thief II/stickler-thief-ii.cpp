//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int solve(vector<int>&ans,int i,int j,vector<int>&dp)
  {
      if(i>j)
      {
          return 0;
      }
      if(dp[i]!=-1)
      {
          return dp[i];
      }
      int a=solve(ans,i+2,j,dp)+ans[i];
      int b=solve(ans,i+1,j,dp);
      
      
      return dp[i]=max(a,b);
  }
  int circ(vector<int>&ans)
  {
      int n=ans.size();
      vector<int>d1(n+1,-1);
      vector<int>d2(n+1,-1);
      int a=solve(ans,1,n-1,d1);
      int b=solve(ans,0,n-2,d2);
      return max(a,b);
  }
    int maxValue(vector<int>& arr) {
        // your code here
        return circ(arr);
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        int res;
        res = ob.maxValue(arr);
        cout << res << "\n"
             << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends