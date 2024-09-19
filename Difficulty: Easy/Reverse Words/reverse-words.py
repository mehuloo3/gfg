//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
      string s="";
      string temp="";
      for(int i=str.size()-1;i>=0;i--)
      {
          if(str[i]=='.')
          {
              s+=tepm+'.';
              temp="";
          }
          else
          {
              temp=str[i]+temp;
          }
      }
      return s+=temp;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends