//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		vector<int> res;
 			int top=0,bottom=n-1,left=0,right=m-1;
 			int dir=0;
 		while (top <= bottom && left <= right) {
 		    if (dir == 0) {
 		        for(int i = left; i <= right; i++) {
 		            res.push_back(a[top][i]);
 		        }
 		        top += 1;
 		    } else if (dir == 1) {
 		        for(int i = top; i <= bottom; i++) {
 		            res.push_back(a[i][right]);
 		        }
 		        right -= 1;
 		    } else if (dir == 2) {
 		        for(int i = right; i >= left; i--) {
 		            res.push_back(a[bottom][i]);
 		        }
 		        bottom -= 1;
 		    } else {
 		        for(int i = bottom; i >= top; i--) {
 		            res.push_back(a[i][left]);
 		        }
 		        left += 1;
 		    }
 		    
 		    dir = (dir + 1) % 4;
 		}
 		
 		return res[k - 1];
//  		vector<int>vec;
//  		int top=0,bottom=n-1,left=0,right=m-1;
//  		while(top<=bottom and left<=right)
//  		{
//  		    for(int i=left;i<=right;i++)
//  		    {
//  		        vec.push_back(a[top][i]);
//  		    }
//  		     top++;
//  		     if(left<=right){
//  		    for(int j=top;j<=bottom;j++)
//  		    {
//  		        vec.push_back(a[j][right]);
//  		    }
//  		    right--;
//  		     }
//  		    if(top<=bottom)
//  		    {
//  		        for(int i=right;i>=left;i--)
//  		        {
//  		            vec.push_back(a[bottom][i]);
 		            
//  		        }
//  		        bottom--;
//  		    }
//  		    if(left<=right)
//  		    {
//  		        for(int j=bottom;j>=0;j--)
//  		        {
//  		            vec.push_back(a[j][left]);
//  		        }
//  		        left++;
//  		    }
//  		}
//  		if (k <= 0 || k > vec.size()) {
//         return -1;  // or handle error as appropriate
//     }
//  		return vec[k-1];
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    
cout << "~" << "\n";
}
}
// } Driver Code Ends