//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        //  int left = 0;
        // int right = n - k;
        // while (left < right) {
           
        //     int mid = left + (right - left) / 2;
          
        //     if (x - arr[mid] <= arr[mid + k] - x) {
        //         right = mid;
        //     } else {
        //         left = mid + 1;
        //     }
        // }

       
        // return vector<int>(arr.begin() + left, arr.begin() + left + k);
        
        vector<pair<int,int>>ans;
        for(int i=0;i<n;i++){
            if(arr[i]!=x)
            ans.push_back({abs(arr[i]-x),i});
        }
        sort(ans.begin(),ans.end(),[&](auto a, auto b){
            if(a.first==b.first) return a.second>b.second;
            return a.first<b.first;
        });
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(arr[ans[i].second]);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends