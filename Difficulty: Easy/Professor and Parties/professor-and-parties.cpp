//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string PartyType(vector<int>& arr) {
        // Your code goes here
        unordered_map<int,int>map;
        for(int i=0;i<arr.size();i++)
        {
            map[arr[i]]++;
        }
        
        for(int i=0;i<arr.size();i++)
        {
            if(map[arr[i]]>1)
                return "true";
        }
            return "false";
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
        string res = obj.PartyType(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends