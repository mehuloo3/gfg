//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        // code
    int n=s.size();
     int ans=INT_MIN;
     int j=0;
     unordered_set<int>st;
     for(int i=0;i<n;i++)
     {
         while(st.find(s[i])!=st.end())
         {
             st.erase(s[j++]);
         }
         st.insert(s[i]);
         
         ans=max(ans,(int)st.size());
     }
     return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.longestUniqueSubstring(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends