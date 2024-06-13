//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
 
        long long lucas(int n)
        {
            //code here.
        long long ans[n];
        ans[0]=2;
        ans[1]=1;
        for(int i=2;i<=n;i++)
        {
            ans[i]=(ans[i-1]%1000000007+ans[i-2]%1000000007)%1000000007;
        }
        return ans[n];
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
		cout<<ob.lucas(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends