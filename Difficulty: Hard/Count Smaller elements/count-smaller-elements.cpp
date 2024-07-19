//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        // code here
        
        
        vector<int>ans;
        vector<int>farji;
        for(int i=0;i<arr.size();i++)
           farji.push_back(arr[i]);
           
        sort(farji.begin(),farji.end());
        for(int i=0;i<arr.size();i++)
        {
            int index=lower_bound(farji.begin(),farji.end(),arr[i])-farji.begin();
            ans.push_back(index);
            farji.erase(farji.begin()+index);
        }
        // int i=0,j=i+1,k=0;
        // vector<int>ans;
        // while(j<arr.size()&&i<j)
        // {
        //     if(arr[j]<arr[i])
        //     {
        //         k++;
        //         ans.push_back(k);
        //         j++;
        //         // i++;
        //     }
        //     i++;
        // }
        return ans;
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
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends