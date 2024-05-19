//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
    vector<int> ans;
    int start = 0;
    int end = n - 1;
    bool f1 = false;
    while (start <= end) {
        if (arr[start] == x) {
            ans.push_back(start);
            f1 = true;
            break;
        }
        start++;
    }
    if (!f1) {
        ans.push_back(-1);
    }
    bool f2 = false;
    while (end >= 0) {
        if (arr[end] == x) {
            ans.push_back(end);
            f2 = true;
            break;
        }
        end--;
    }
    if (!f2) {
        ans.push_back(-1);
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
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends