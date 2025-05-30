//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int maxProfit(int m, vector<int> &arr) {
        // Your code goes here.
        sort(arr.begin(),arr.end());
        long stock=0;
        for(int i=0;i<arr.size();i++)
        {
                if(arr[i]<0 and m>0)
                {
                stock+=abs(arr[i]);
                m--;
                }
        }
        return stock;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.maxProfit(k, arr) << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends