//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public: 
    int f(int i,int n)
    {
        if(i==1 || i==n) return 1;
        return f(i-1,n-1)+f(i,n-1);
    }
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            int val=f(i,n);
            ans.push_back(val);
        }
        return ans;
    }
};



//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);

        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends