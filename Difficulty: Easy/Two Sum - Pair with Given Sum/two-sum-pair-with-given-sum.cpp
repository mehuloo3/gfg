//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        // int i=0;
        // int j=arr.size()-1;
        // while(i<=j)
        // {
        //     if(arr[i]+arr[j]!=target)
        //     {
        //         return false;
        //     }
        //     i++;
        //     j--;
        // }
        
        // for(int i=0;i<arr.size();i++)
        // {
        //     for(int j=0;j<arr.size();i++)
        //     {
        //         if(arr[i]+arr[j]==target)
        //         {
        //             return true;
        //         }
        //     }
        // }
        // return false;
        sort(arr.begin(),arr.end());
        int start=0;
        int end=arr.size()-1;
        int sum=0;
        while(start<end)
        {
            sum=arr[start]+arr[end];
            if(sum==target)
            {
                return true;
            }
            else if(sum<target)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return false;
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

        Solution ob;
        auto ans = ob.twoSum(arr, x);
        cout << (ans ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends