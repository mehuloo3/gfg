//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxLength(string& s) {
        // code here
        // int res=1;
        // vector<int>dp(s.size(),1);
        // for(int i=1;i<s.size();i++)
        // {
        //     for(int j=0;j<s.size();j++)
        //     {
        //         if(s[i]>s[j])
        //         {
        //           dp[i]=max(dp[i],dp[j]+1); 
        //         }
        //     }
        //     res=max(res,dp[i]);
        // }
        // return res;
        
        int n = s.size();
    vector<int> dp(n, 1); 

    int res = 1; 

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (s[i] > s[j]) { 
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        res = max(res, dp[i]);
    }
    return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.maxLength(S) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends