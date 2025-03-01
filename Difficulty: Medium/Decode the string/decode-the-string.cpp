//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string decodedString(string &s) {
        // code here
        if(s.size()==0) return s;
        stack<int>st;
        stack<string>str;
        int num=0;
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                num=num*10+(s[i]-'0');
            }else if(s[i]=='[')
            {
                st.push(num);
                num=0;
                str.push(temp);
                temp="";
            }else if(s[i]==']')
            {
                int x=st.top();
                st.pop();
                
                string tempStr = temp;
                for(int j=1;j<x;j++)
                {
                  str.top()+=tempStr;
                }
                temp=str.top()+tempStr;
                str.pop();
                
            }else
            {
                temp+=s[i];
            }
        }
        return temp;
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
        cout << ob.decodedString(s) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends