//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countElements(vector<int>& arr) {
        // code here
        
        int x=arr[0];
        int res=1;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(x<arr[i+1])
            {
                res++;
                x=arr[i+1];
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character before getline
    while (t--) {
        vector<int> arr;
        string line;

        getline(cin, line);
        stringstream ss(line);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution solution;
        cout << solution.countElements(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends