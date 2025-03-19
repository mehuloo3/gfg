//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  vector<vector<vector<int>>>dp;
  int fn(int i,vector<int>&ans,bool mode,int k)
{
    if(k==0 || i==ans.size()) return 0;
    if(dp[i][mode][k]!=-1) return dp[i][mode][k]; 
    if(mode==0)
    {
        return dp[i][mode][k]=max(fn(i+1,ans,!mode,k)-ans[i],fn(i+1,ans,mode,k));
    }
    else
    {
        return dp[i][mode][k]=max(fn(i+1,ans,!mode,k-1)+ans[i],fn(i+1,ans,mode,k));
    }
}
    int maxProfit(vector<int>& prices, int k) {
        // code here
        int n=prices.size();
        dp.resize(n,vector<vector<int>>(2,vector<int>(k + 1,-1)));
        return fn(0, prices,0,k);
        
    }
};


//{ Driver Code Starts.

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        istringstream iss(input);
        vector<int> arr;
        int num;

        // Read integers from the input string
        while (iss >> num) {
            arr.push_back(num);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution ob;
        cout << ob.maxProfit(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends