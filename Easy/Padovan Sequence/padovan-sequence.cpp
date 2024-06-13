//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  
    public:
//     int rec(int n)
// {
//   if(n==0 ||  n==1 || n==2)
//       {
//           return 1;
//       }
//       return (rec(n-2)%1000000007)+rec(n-3)%1000000007;
// }
  int tab(int n){
      
        vector<int> dp(n+1,-1);
        dp[0]=1;
        dp[1]=1;
        dp[2]=1;
        
        for(int i=3;i<=n;i++){
           dp[i]=(dp[i-2]%1000000007+dp[i-3]%1000000007)%1000000007; 
        }
        
        return dp[n];
    }
    int padovanSequence(int n)
    {
        return tab(n);
       //code here
    //   if(n==0 ||  n==1 || n==2)
    //   {
    //       return 1;
    //   }
    //   vector<int>ans(n+1,1);
    //   for(int i=3;i<=n;i++)
    //   {
    //       ans[n]=(ans[n-2]+ans[n-3])%1000000007;
    //   }
    //   return ans[n];
    // return rec(n);
    }
    
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends