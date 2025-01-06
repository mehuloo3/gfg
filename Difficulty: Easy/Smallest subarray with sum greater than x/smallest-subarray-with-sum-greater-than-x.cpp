//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
    int n=arr.size();
    int i=0;
    int j=0;
    int sum=0;
    int res=INT_MAX;
    while(j<n)
    {
        while(sum<=x and j<n)
        {
            sum+=arr[j++];
        }
        while(sum>x)
        {
            res=min(res,j-i);
            sum-=arr[i++];
        }
    }
    return (res==INT_MAX?0:res);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        vector<int> arr;
        int x;

        cin >> x;
        cin.ignore(); // Ignore the newline character after x

        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        cout << obj.smallestSubWithSum(x, arr) << "\n~\n";
    }

    return 0;
}
// } Driver Code Ends