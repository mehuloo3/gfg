//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        unordered_map<int,int>mp;
        vector<int>res;
        priority_queue<pair<int,int>>p;
        vector<pair<int,int>>vc;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
          for(auto i=mp.begin();i!=mp.end();i++)
        {
            vc.push_back({-i->second,i->first});
        }
       sort(vc.begin(),vc.end());
       for(auto i:vc)
       {
           for(int j=0;j<-i.first;j++)
           {
               res.push_back(i.second);
           }
       }
       return res;
        // for(auto i=mp.begin();i!=mp.end();i++)
        // {
        //     p.push({i->second,i->first});
        // }
        // while(!p.empty())
        // {
        //     res.push_back({p.top().second});
        //     p.pop();
        // }
        
       return res;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends