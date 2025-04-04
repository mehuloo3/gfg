//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find triplets with zero sum.
    bool findTriplets(vector<int> &arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++){
            int x=arr[i];
            
             int j=n-1;
        int k=i+1;
        while(k<j)
        {
            int sum=x+arr[j]+arr[k];
            if(sum==0)
            {
                return true;
            }
            else if(sum>0)
            {
                j--;
            }else
            {
                k++;
            }
        }
        }
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input
    while (t--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> arr;
        int num;
        while (ss >> num)
            arr.push_back(num);

        Solution obj;
        if (obj.findTriplets(arr))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }

    return 0;
}

// } Driver Code Ends