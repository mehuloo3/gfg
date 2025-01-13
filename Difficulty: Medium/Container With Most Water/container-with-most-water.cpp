//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        
        //tle
        int ans=0;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         int x=(j-i)*min(arr[i],arr[j]);
        //         ans=max(ans,x);
        //     }
        // }
        // return ans;
        
        int i=0;
        int j=n-1;
        
        while(i<=j)
        {
            int x=(j-i)*min(arr[i],arr[j]);
            ans=max(x,ans);
            if(arr[i]<arr[j])
                i++;
            else
            j--;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends