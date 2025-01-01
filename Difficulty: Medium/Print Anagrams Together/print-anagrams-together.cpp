//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        vector<vector<string>>vc;
        unordered_map<string,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            string x=arr[i];
            sort(x.begin(),x.end());
            mp[x]++;
            
        }
        for(auto i:mp)
        {
            string y=i.first;
            vector<string>ans;
            for(int i=0;i<arr.size();i++)
            {
                string z=arr[i];
                sort(z.begin(),z.end());
                if(z==y)
                {
                    ans.push_back(arr[i]);
                }
            }
             vc.push_back(ans);
        }
        return vc;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<string> arr;
        string input_line;
        getline(cin, input_line);
        stringstream ss(input_line);
        string word;
        while (ss >> word) {
            arr.push_back(word);
        }

        Solution ob;
        vector<vector<string> > result = ob.anagrams(arr);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends