//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int tel(long long n)
{
    vector<int>dp(n+1,-1);
    dp[0]=1;
    dp[1]=1;
    for(long long i=2;i<=n;i++)
    {
        dp[i]=(dp[i-1])%1000000007+((i-1)*dp[i-2])%1000000007;
    }
    return dp[n]%1000000007;
}
    long long telephoneNum(long long n){
        // code here
        return tel(n);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        Solution ob;
        cout<<ob.telephoneNum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends