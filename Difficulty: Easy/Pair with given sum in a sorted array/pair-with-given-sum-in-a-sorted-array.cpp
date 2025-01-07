//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        
        
        
        int cnt=0;
        // for(int i=0;i<arr.size();i++)
        // {
        //     for(int j=0;j<arr.size();i++)
        //     {
        //         if(arr[i]+arr[j]==target)
        //         {
        //             cnt++;
                    
        //         }
        //     }
        // }
        // return cnt;
        
     
        
        unordered_map<int,int>mp;
        int sum;
        for(auto i:arr)
        {
          int x=target-i;
          if(mp.find(x)!=mp.end())
          {
              cnt+=mp[x];
          }
          mp[i]++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends