//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

//User function Template for C++


class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here 
    	long long cnt=0;
    	sort(a,a+n);
    	int i=0;
    	int j=n-1;
    	while(i<j)
    	{
    	    int sum=0;
    	    if(i!=j)
    	    {
    	        sum=a[i]+a[j];
    	    }
    	    if(sum>0)
    	    {
    	        cnt+=j-i;
    	        j--;
    	    }
    	    else
    	    {
    	        i++;
    	    }
    	}
    	return cnt;
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
		int array[n];
		for (int i = 0; i < n; ++i)
			cin>>array[i];
	    Solution obj;
		cout << obj.ValidPair(array, n) <<"\n";
	
cout << "~" << "\n";
}
	return 0; 
} 


// } Driver Code Ends