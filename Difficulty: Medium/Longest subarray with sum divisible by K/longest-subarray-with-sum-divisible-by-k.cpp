//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int longSubarrDivByK(vector<int>& arr, int k) {
        // Complete the function
        int n=arr.size();
        unordered_map<int,int>mp;
        mp[0]=-1;
        int ans=0;
        int sum=0;
        for(int i=0;i<n;i++){
        sum+=arr[i];
        int rem=sum%k;
        if(rem<0)
        {
            rem+=k;
        }
        if(mp.find(rem)!=mp.end())
        {
            ans=max(ans,i-mp[rem]);
        }
        else
        {
            mp[rem]=i;
        }
        }
        return ans;
  
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.longSubarrDivByK(arr, d);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends