//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
        //Tle
        // int count=0;
        int n=arr.size();
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         for(int k=j+1;k<n;k++)
        //         {
        //             if(arr[i]+arr[j]+arr[k]==target)
        //             {
        //                 count++;
        //             }
        //         }
        //     }
        // }
        // return count;
        int count=0;
        unordered_map<int,int>mp;
        for(auto i:arr)
        {
            mp[i]++;
        }
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]--;
            for(int j=0;j<i;j++)
            {
                int t=target-arr[i]-arr[j];
                if(mp.find(t)!=mp.end())
                {
                    count+=mp[t];
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends