//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int gcd(int a,int b)
{
    if(a==0)
    return b;
    if(b==0)
    return a;
    
    if(a>b)
    {
        return gcd(a%b,b);
    }
    else
    {
        return gcd(a,b%a);
    }
}
int lmc(int a,int b)
{
    
}
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        
        long long G=gcd(A,B);
        long long L=A*B/G;
        
        return {L,G};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends