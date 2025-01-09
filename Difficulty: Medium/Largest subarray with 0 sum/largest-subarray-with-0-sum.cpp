//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/
#include<unordered_map>
class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // code here
        int n=arr.size();
        int sum=0;
        int res=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum==0)
            {
                res=i+1;
            } 
             else if(mp.find(sum)!=mp.end())
            {
                res=max(res,i-mp[sum]);
            }
           if(mp.find(sum)==mp.end())
           {
               mp[sum]=i;
           }
        }
        return res;
    //     int res=0;
    // int sum=0;
    // unordered_map<int,int>mp;
    // for(int i=0;i<n;i++)
    // {
    //   sum+=arr[i];
    //   if(sum==0)
    //   {
    //       res=i+1;
    //   }
    //   else if(mp.find(sum)!=mp.end(sum))
    //   {
    //       res=max(res,i-mp[sum]);
    //   }
    //   else
    //   {
    //       mp[sum]=i;
    //   }
    // }
    //     return res;
    // int ans=0;
    // for(int i=0;i<n;i++)
    // {
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum+=arr[j];
    //         if(sum==0)
    //         {
    //             ans=max(ans,j-i+1);
    //         }
            
    //     }
    // }
    // return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.maxLen(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends