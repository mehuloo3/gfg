//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        // code here
        
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int k=n-1;
        int cnt=0;
        while(k>=2)
        {
            int l=0,r=k-1;
            while(l<r)
            {
                int x=arr[l]+arr[r];
                if(x>arr[k])
                {
                    cnt=cnt+(r-l);
                    r--;
                }
                else
                {
                    l++;
                }
            }
            k--;
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input
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
        cout << obj.countTriangles(a) << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends