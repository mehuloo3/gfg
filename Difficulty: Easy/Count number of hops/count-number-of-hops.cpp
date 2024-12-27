//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to count the number of ways in which frog can reach the top
    int find(int n,int jump)
    {
        if(jump==n) return 1;
        if(jump>n) return 0;
        
        // if(dp[jump]!=-1) return dp[jump];
        
        // dp[jump]=find(n,dp,jump+1)+find(n,dp,jump+2)+find(n,dp,jump+3);
        // return dp[jump];
        return find(n,jump+1)+find(n,jump+2)+find(n,jump+3);
    }
    int countWays(int n) {

        // your code here
        vector<int>dp(n+1,-1);
        return find(n,0);
    }
};


//{ Driver Code Starts.
int main() {
    // taking testcases
    int t;
    cin >> t;

    while (t--) {
        // taking number of steps in stair
        int n;
        cin >> n;
        Solution ob;
        // calling function countWays()
        cout << ob.countWays(n) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends