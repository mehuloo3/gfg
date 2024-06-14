//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int sum=0;
        int x=n;
        while(x>0)
        {
            int r=x%10;
            sum+=r;
            x=x/10;
        }
        int p=0;
        int t=sum;
        while(sum>0)
        {
            int y=sum%10;
            p=(p*10)+y;
            sum=sum/10;
        }
        if(t==p) return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends