//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isDivisible(int N) {
        // code here
        int n=N;
        int sum=0;
        while(n){
            sum+=n%10;
            n=n/10;
        }
            if(N%sum==0) return 1;
            else return 0;
        
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
        cout << ob.isDivisible(N) << "\n";
    }
}
// } Driver Code Ends