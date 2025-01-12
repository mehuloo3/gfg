//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        if(n==0) return 0;
        int l=0,r=arr.size()-1;
        int left=arr[l];
        int right=arr[r];
        int res=0;
        while(l<r)
        {
            if(left<right)
            {
               l++;
               left=max(left,arr[l]);
               res+=left-arr[l];
            }
            else
            {
                r--;
                right=max(right,arr[r]);
                res+=right-arr[r];
            }
        }
        return res;
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