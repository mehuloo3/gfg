//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution { 
  public:
    int removeConsecutiveSame(vector<string>&arr) {
        // Your code goes here
        stack<string>str;
        for(int i=0;i<arr.size();i++)
        {
            if(str.empty())
            {
                str.push(arr[i]);
            }
            else if(str.top()==arr[i])
            {
                str.pop();
            }
            else
            {
                str.push(arr[i]);
            }
        }
        return str.size();
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline character after the integer input
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<string> arr;
        string s;
        while (ss >> s) {
            arr.push_back(s);
        }
        Solution ob;
        cout << ob.removeConsecutiveSame(arr) << endl;
    }

    return 0;
}
// } Driver Code Ends