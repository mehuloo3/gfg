//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
        // your code here
     string x="";
     for(int i=s.length()-1;i>=0;i--)
     {
         int a=s[i]-'0';
         if(a%2!=0)
         {
             while(i>=0){
             x+=s[i];
             i--;
             }
         }
     }
     reverse(x.begin(),x.end());
     return x;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends