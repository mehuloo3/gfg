//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto i:arr)
        {
            if(mp.find(i)!=mp.end())
            {
                continue;
            }
            mp[i]++;
            ans.push_back(i);
        }
        // for(auto i:mp)
        // {
        //     if(i.second==1 or i.second==2)
        //     {
        //         ans.push_back(i.first);
        //     }
        // }

        // for(int i=1;i<arr.size();i++)
        // {
        //     if(arr[i-1]==arr[i]){continue;}
        //     else
        //     {
        //         ans.push_back(arr[i]);
        //     }
        // }
        return ans;
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
        vector<int> ans = obj.removeDuplicate(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends