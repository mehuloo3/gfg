//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
    //  unordered_set<char>st;
     int n=s.size();
    //  int ans=INT_MIN;
    //  int j=0;
    //  for(int i=0;i<n;i++)
    //  {
    //      while(st.find(s[i])!=st.end())
    //      {
    //          st.erase(s[j++]);
    //      }
    //      st.insert(s[i]);
         
    //      ans=max(ans,(int)st.size());
    //  }
    //  return ans;
    
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        vector<bool>freq(26,false);
        for(int j=i;j<n;j++)
        {
            if(freq[s[j]-'a']==true)
              break;
             else 
        {
            ans=max(ans,j-i+1);
            freq[s[j]-'a']=true;
        }
        }
       
    }
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