//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find the minimum number of swaps required to sort the array.
    int minSwaps(vector<int>& arr) {
        // Code here
        vector<pair<int,int>>ans;
        for(int i=0;i<arr.size();i++)
        {
            ans.push_back({arr[i],i});
        }
        sort(ans.begin(),ans.end());
        int cnt=0;
        for(int i=0;i<arr.size();i++)
        {
            if(ans[i].second!=i)
            {
                swap(ans[i],ans[ans[i].second]);
                cnt++;
                i--;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minSwaps(arr) << endl;
    }
}

// } Driver Code Ends