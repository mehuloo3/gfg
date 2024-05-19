//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int ans=arr[0];
        int diff=abs(arr[0]-k);
        for(int i=1;i<n;i++)
        {
            int current=abs(arr[i]-k);
            if(current<diff || (current == diff && arr[i]>ans))
            {
                diff=current;
                ans=arr[i];
            }
        }
        return ans;
        
        
        
        // int start=0;
        // int end=n-1;
        // int maxi=INT_MAX;
        // int ans=0;
        // while(start<=end)
        // {
        //     int mid=start+(start-end)/2;
        //     int x=abs(arr[mid]-k);
        //     if(abs(ans-k)>x) 
        //     ans=arr[mid];
        //     if(abs(ans-k)==x)
        //     ans=max(ans,arr[mid]);
        //     if(arr[mid]>k)
        //     end=mid-1;
        //     else
        //     start=mid+1;
        //     if(x<=maxi & (x<maxi || arr[mid]>ans))
        //     {
        //         ans=arr[mid];
        //         maxi=x;
        //     }
        //  if(arr[mid]==k)
        //     {
        //         return ans;
        //     }
        //  if(arr[mid]>k)
        //     {
        //         end=mid-1;
        //     }
        //     else
        //     {
        //         end=mid+1;
        //     }
        // }
        // }
        // return ans;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends