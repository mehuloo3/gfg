//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        
       int n=arr.size();
       sort(arr.begin(),arr.end());
       int cnt=0;
       int i=0;
       int j=n-1;
       while(i<j)
       {
           if(arr[i]+arr[j]<target)
           {
               cnt=cnt+(j-i);
               i++;
           }
           else
           {
               j--;
           }
       }
       return cnt;
        //TLE
        // int cnt=0;
        // int n=arr.size();
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(arr[i]+arr[j]<target)
        //         {
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;
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
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);
        cout << res << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends