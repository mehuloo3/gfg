//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &end) {
        // Your code here
        int ans=0;
        int f=-1;
        vector<pair<int,int>>res;
        for(int i=0;i<start.size();i++)
        {
            res.push_back(make_pair(end[i],start[i]));
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++)
        {
            pair<int,int>act=res[i];
            if(act.second>f)
            {
                f=act.first;
                ans++;
            }
        }
        return ans;
      
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> start;
        int num;
        while (ss >> num)
            start.push_back(num);
        getline(cin, input);
        ss.clear();
        vector<int> end;
        ss.str(input);
        while (ss >> num)
            end.push_back(num);

        Solution obj;
        cout << obj.activitySelection(start, end) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends