//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b) {

        // Your code here
        // unordered_map<char,int>m1,m2;
        // for(auto i:a)
        // {
        //     m1[i++];
        // }
        //  for(auto i:b)
        // {
        //     m2[i++];
        // }
        
        // for(auto i:a)
        // {
        //     if(m1[i]==m2[i])
        //     {
        //         return true;
        //     }
        // }
        // return false;
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        if(a!=b) return false;
        else
        return true;
    }
};

//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.isAnagram(c, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

// } Driver Code Ends