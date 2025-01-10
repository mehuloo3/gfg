//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(vector<int> &arr) {
        // code here
        int ans=-1;
        int n=arr.size();
        unordered_map<int,int>mp;
        for(auto i:arr)
        {
            mp[i]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]>1)
            {
                ans=i+1;
                break;
            }
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.firstRepeated(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends