//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
  bool perfect(long long n)
  {
      if(n>=0)
      {
          long long x=sqrt(n);
          
          if(x*x==n)
          {
              return true;
          }
      }
      return false;
  }
    int numOfPerfectSquares(int a, int b) {
        // code here
       int cnt=0;
        int i=a,j=b;
        while(i<=j)
        {
           if(perfect(i))
            {
                cnt++;
            }
            i++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        
        cin>>a>>b;

        Solution ob;
        cout << ob.numOfPerfectSquares(a,b) << endl;
    }
    return 0;
}
// } Driver Code Ends