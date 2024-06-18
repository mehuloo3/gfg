//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        // vector<int>v;
        // map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(v[i]==x)
            {
                // v.push_back(v[i]);
                // mp[v[i]];
                return i;
            }
            else if(v[i]>x)
            {
                return i-1;
            }
        }
        // int maxi=INT_MIN;
        // for(int i=0;i<mp.size();i++)
        // {
        //     if(mp[i]>maxi)
        //     {
        //         maxi=mp[i];
        //     }
        // }
        // return maxi;
        
        return n-1;
        
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends