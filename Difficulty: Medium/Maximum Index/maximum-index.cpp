//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr[]: input array
    // Function to find the maximum index difference.
    int maxIndexDiff(vector<int>& arr) {
        // Your code here
    //TLE
    int n=arr.size();
    // int maxi=0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[i]<=arr[j])
    //         {
    //             maxi=max(maxi,j-i);
    //         }
    //     }
    // }
    // return maxi;
    
    //optimal
    stack<int>st;
    int ans=0;
    for(int i=n-1;i>=0;i--)
    {
        if(st.empty() or arr[st.top()]<arr[i])
        {
            st.push(i);
        }
    }
    for(int i=0;i<n;i++)
    {
        while(!st.empty() and arr[st.top()]>=arr[i])
        {
            ans=max(ans,st.top()-i);
            st.pop();
        }
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;

        // calling maxIndexDiff() function
        cout << ob.maxIndexDiff(nums) << endl;
    }

    return 0;
}
// } Driver Code Ends