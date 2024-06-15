//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
//   long long mobile(int i,int j,int n,vector<vector<vector<long long>>> &v)
//   {
//       if(i>3 or j>2 or i<0 or j<0) return 0;
//       if(i==3 and (j==0 or j==2)) return 0;
//       if(n==1) return 1;
//       if(v[i][j][n]!=-1) return v[i][j][n];
//       n--;
//       return v[i][j][n+1]=mobile(i-1,j,n,v)+mobile(i,j-1,n,v)+mobile(i+1,j,n,v)+mobile(i,j+1,n,v);
//   }
//     long long getCount(int n) {
//         // Your code goes here
//         long long ans=0;
//             vector<vector<vector<long long>>> v(4,vector<vector<long long>>(3,vector<long long>(n+1,-1)));
//         for(int i=0;i<4;i++)
//         {
//             for(int j=0;j<3;j++)
//             {
//                 if(i==3 and (j==0 or j==2)) continue;
//                 ans+=mobile(i,j,n,v);
//             }
//         }
//         return ans;

long long help(int i,int j,int n,vector<vector<vector<long long>>> &dp){
        if(i>3 or j>2 or i<0 or j<0)return 0;
        if(i==3 and (j==0 or j==2))return 0;
        if(n==1)return 1;
        if(dp[i][j][n]!=-1)return dp[i][j][n];
        n--;
        return dp[i][j][n+1] = help(i-1,j,n,dp)+help(i,j-1,n,dp)+help(i+1,j,n,dp)
                                +help(i,j+1,n,dp)+help(i,j,n,dp);
    }
    long long getCount(int n) {
        // Your code goes here
        long long ans=0;
        vector<vector<vector<long long>>> dp(4,vector<vector<long long>>(3,vector<long long>(n+1,-1)));
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                if(i==3 and (j==0 or j==2))continue;
                ans+=help(i,j,n,dp);
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
        int n;
        cin >> n;

        Solution ob;
        cout << ob.getCount(n) << "\n";
    }
    return 0;
}

// } Driver Code Ends