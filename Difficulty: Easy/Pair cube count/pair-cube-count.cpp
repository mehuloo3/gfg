//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int pairCubeCount(int N) {
        // code here
        
        int cnt=0;
        if(N==1) return 1;
        for(int i=0;i<cbrt(N);i++)
        {
            for(int j=0;j<cbrt(N);j++){
            if(pow(i,3)+pow(j,3)==N)
            {
                cnt++;
            }
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.pairCubeCount(N) << endl;
    }
    return 0;
}
// } Driver Code Ends