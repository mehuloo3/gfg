//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        vector<int>ans;
        //12,5,787,1,23
        sort(arr.begin(),arr.end());
        //1,5,12,23,787   k=2 k means i need the k's largest element which is last k element 787,23
        //for these in reverse the element for better 
        //787,23,12,5,1 k=2  ans=[787,23].
        reverse(arr.begin(),arr.end());
        for(int  i=0;i<k;i++)
        {
            ans.push_back(arr[i]);
        }
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.kLargest(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends