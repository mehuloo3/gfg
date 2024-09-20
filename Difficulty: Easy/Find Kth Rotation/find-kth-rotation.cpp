//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        
        int n=arr.size();
        int start=0;
        int end=arr.size()-1;
        int mini=arr[0];
        int mid=start+(end-start)/2;
        int res;
        for(int i=0;i<arr.size();i++)
        {
            if(mini>arr[i])
          {
              mini=arr[i];
          }
           
        }
        // while(start<=end)
        // {
        //   if(arr[mid]==mini)
        //   {
        //       res=mid;
        //   }
        //   else if(arr[mid]<mini)
        //   {
        //       start=mid+1;
        //   }
        //   else
        //   {
        //       end=mid-1;
        //   }
        // }
        
        for (int i = 0; i < n; i++) {
        if (arr[i] == mini) {
            res = i;
            break;  
        }
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
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
    }
}
// } Driver Code Ends