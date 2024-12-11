//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(int x, vector<int> &arr) {
        // Code here
        vector<int>ans;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==x)
            {
                ans.push_back(i);
                break;
            }
        }
          for(int i=arr.size()-1;i>=0;i--)
        {
            if(arr[i]==x)
            {
                ans.push_back(i);
                break;
            }
        }
       
            if(ans.size()==0)
            {
                ans.push_back(-1);
                return ans;
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
        int x;
        cin >> x;
        cin.ignore();

        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> ans = obj.firstAndLast(x, arr);
        for (int i : ans) {
            cout << i << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends