//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        //tle
      int n=arr.size();
    //   vector<int>res;
    //   for(int i=0;i<=n-k;i++)
    //   {
    //       unordered_set<int>st;
    //       for(int j=i;j<k+i;j++)
    //       {
    //           st.insert(arr[j]);
    //       }
    //       res.push_back(st.size());
    //   }
    //   return res;
    
    unordered_map<int,int>mp;
    vector<int>res;
    for(int i=0;i<k;i++)
    {
        mp[arr[i]]++;
    }
    res.push_back(mp.size());
    for(int i=k;i<n;i++)
    {
        mp[arr[i]]++;
        mp[arr[i-k]]--;
        
        if(mp[arr[i-k]]==0)
        {
            mp.erase(arr[i-k]);
        }
        res.push_back(mp.size());
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        vector<int> res = obj.countDistinct(arr, k);
        for (auto it : res)
            cout << it << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends