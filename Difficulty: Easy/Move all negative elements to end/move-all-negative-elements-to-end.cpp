//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        int cnt=0;
        vector<int>res;
        vector<int>x;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=0)
            {
                x.push_back(arr[i]);
            }
            else
            {
               res.push_back(arr[i]);
            }
        }
        int j=0;
        for(int i=0;i<arr.size();i++)
        {
            if(i<x.size())
            {
                arr[i]=x[i];
            }
            else
            {
                arr[i]=res[j];
                j++;
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << endl;
    }
}
// } Driver Code Ends