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
        int a=arr[0];
        int diff=abs(arr[0]-k);
        for(int i=1;i<n;i++)
        {
            int current=abs(arr[i]-k);
            if(current<diff || (current == diff && arr[i]>a))
            {
                diff=current;
                a=arr[i];
            }
        }
        return a;
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