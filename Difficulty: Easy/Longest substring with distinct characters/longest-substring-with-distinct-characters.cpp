//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int ans=INT_MIN;
        unordered_set<char>st;
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            while(st.find(s[i])!=st.end())
            {
                st.erase(s[j++]);
            }
            st.insert(s[i]);
            ans=max(ans,(int)st.size());
        }
        // for(int i=0;i<s.size();i++)
        // {
        //     for(int j=i+1;j<s.size();j++)
        //     {
        //         if(s[i]==s[j])
        //         {
        //           break;
        //         }else
        //         {
        //              ans=max(ans,j-i);
        //         }
        //     }
        // }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends