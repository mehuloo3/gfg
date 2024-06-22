//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
   	int is_weird(int n){
   	    // Code here
   	    int ans=n;
   	    int sum=0;
   	    for(int i=n-1;i>=1;i--)
   	    {
   	        if(n%i==0)
   	        {
   	            sum+=i;
   	            if(i<=ans)
   	            {
   	                ans=ans-i;
   	            }
   	        }
   	        
   	    }
   	    if(ans!=0 && sum>n)
   	       return 1; 
   	    else return 0;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.is_weird(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends