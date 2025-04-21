//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        // add code here.
        int n=a.size();
        int m=b.size();
        int s1=0;
        int s2=0;
        int res=-1;
        for(int i=0;i<n;i++)
        {
            s1+=a[i];
        }
        for(int j=0;j<m;j++)
        {
            s2+=b[j];
        }
        int x=s1-s2;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                res=i;
            }
        }
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr1, arr2;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }

        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr2.push_back(number1);
        }

        Solution ob;
        int ans = ob.findExtra(arr1, arr2);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends