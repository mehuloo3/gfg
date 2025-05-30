//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
        int maxi=0;
        int index=0;
        int cnt=0;
        for(int i=0;i<arr[0].size();i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                if(arr[j][i]==0)
                {
                    cnt++;
                }
            }
            if(cnt>maxi)
            {
                maxi=cnt;
                index=i;
            }
            cnt=0;
        }
        if(maxi==0) return -1;
        
        return index;
    }
};

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    vector<vector<int>>arr(N,vector<int>(N));
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	        for(int j = 0;j<N;j++){
	            int x;
	            cin >> x; 
	            arr[i][j]=x;
	        }
	    }
	    Solution ob;
	    cout << ob.columnWithMaxZeros(arr,N) << endl;
	
cout << "~" << "\n";
}
	
	return 0;
}
// } Driver Code Ends