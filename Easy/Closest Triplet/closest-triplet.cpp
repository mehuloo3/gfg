//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findClosest(int P, int Q, int R, int A[], int B[], int C[]) {
        // code here
        int ans=INT_MAX,x,y,z;
        int i=0,j=0,k=0;
        while(i<P && j<Q && k<R)
        {
        x=abs(A[i]-B[j]);
        y=abs(B[j]-C[k]);
        z=abs(C[k]-A[i]);
        int t=max({x,y,z});
        if(t<ans)
        {
            ans=t;
        }
        
        int a=min({A[i],B[j],C[k]});
        
        if(A[i]==a)
        {
            i++;
        }
        if(B[j]==a)
        {
            j++;
        }
        if(C[k]==a)
        {
            k++;
        }
        }
       return ans;
    }
 
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int P, Q, R, i;
        cin >> P;
        int A[P];
        for (i = 0; i < P; i++) cin >> A[i];
        cin >> Q;
        int B[Q];
        for (i = 0; i < Q; i++) cin >> B[i];
        cin >> R;
        int C[R];
        for (i = 0; i < R; i++) cin >> C[i];
        Solution ob;
        cout << ob.findClosest(P, Q, R, A, B, C) << "\n";
    }
}
// } Driver Code Ends