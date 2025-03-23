//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int count(string s) {
    int n = s.length();
    if (n == 0 || s[0] == '0') return 0; // No valid encoding if starting with '0'

    vector<int> dp(n + 1, 0);
    dp[0] = 1;  // Empty string has one way
    dp[1] = 1;  // Single character has one way if not '0'

    for (int i = 2; i <= n; i++) {
        // Single-digit number check (1-9)
        if (s[i - 1] != '0') {
            dp[i] += dp[i - 1];
        }
        // Two-digit number check (10-26)
        int twoDigit = stoi(s.substr(i - 2, 2));
        if (twoDigit >= 10 && twoDigit <= 26) {
            dp[i] += dp[i - 2];
        }
    }

    return dp[n];
}
    int countWays(string &digits) {
        // Code here
        return count(digits);
        
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        string digits;
        getline(cin, digits);
        Solution obj;
        int ans = obj.countWays(digits);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends