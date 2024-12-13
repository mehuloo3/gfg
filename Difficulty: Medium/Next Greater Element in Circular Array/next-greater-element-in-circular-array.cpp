//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User Function Template for C++ solution

class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr,int n){
        // vector<long long>ans(n,-1);
        // stack<int>st;
        // for(int i=n-1;i>=n;i--)
        // {
        //     while(!st.empty() && arr[st.top()]<arr[i])
        //     st.pop();
            
        //     if(!st.empty())
        //     ans[i]=arr[st.top()];
            
        //     st.push(i);
        // }
        // return ans;
        
        
// vector<long long>ans(n,-1);
//  for(int i=0;i<n;i++)
//  {
//     for(int j=i+1;j<n;j++)
//     {
//         if(arr[j]>arr[i])
//         {
//             ans[i]=arr[j];
//             break;
//         }
//     }
//  }
 
//  return ans;


 stack<long long> st;
        st.push(-1);
        vector<long long> ans(n);
        int x=2;
        while(x) {
            for(int i=n-1;i>=0;i--)
            {
                while(st.top()!=-1 && st.top()<=arr[i]) st.pop();
                ans[i]=st.top();
                st.push(arr[i]);
            }
            x--;
        }
        return ans;
        
   
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution ob;
        
        vector <long long> res = ob.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends