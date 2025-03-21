//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
int solve(int i, int diff, vector<int> &arr) {
    if (i<0) 
        return 0;
    int ans=0;
    for (int j = i-1;j>=0;j--)
     {
        if (arr[i]-arr[j]==diff)
         {
            ans=max(ans,1+solve(j,diff,arr));
          }
    }

    return ans;
}
int lap(vector<int> &arr) {
  
    int n = arr.size();
    if (n<=2) 
        return n;

    int ans = 0;
    for (int i=0;i<n;i++)
     {
        for(int j=i+1;j<n; j++)
         {
        ans=max(ans,2+solve(i,arr[j]-arr[i],arr));
        }
    }
    return ans;
}
    int lengthOfLongestAP(vector<int>& arr) {
        // code here
        return lap(arr);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.lengthOfLongestAP(arr);
        cout << ans << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends