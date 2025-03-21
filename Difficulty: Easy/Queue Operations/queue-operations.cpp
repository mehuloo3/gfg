//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  Helper class Solution to implement
//  insert() and findFrequency()
class Solution {
  public:
    // Function to insert element into the queue
    unordered_map<int,int>mp;
    void insert(queue<int> &q, int k) {
        // Your code here
        q.push(k);
        mp[k]++;
    }

    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k) {
        // Your code here
    if(mp.find(k)==mp.end())
    {
        return -1;
    }
    return mp[k];
    }
};

//{ Driver Code Starts.
int main() {

    int testcase;
    cin >> testcase;
    cin.ignore();
    while (testcase-- > 0) {
        // Declaring Queue
        queue<int> q;
        //  int n, k;
        //  cin>>n;

        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        // Invoking object of Geeks class
        Solution obj;
        int n = a.size();
        for (int i = 0; i < n; i++) {
            int k = a[i];
            obj.insert(q, k);
        }

        int m = b.size();
        for (int i = 0; i < m; i++) {
            int k = b[i];
            int f = obj.findFrequency(q, k);
            if (f != 0) {
                cout << f << endl;
            } else {
                cout << "-1\n";
            }
        }
    }
    return 0;
}
// } Driver Code Ends