//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public: 
    // Function to return list of integers that form the boundary
    // traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> >& mat) {
        // code here
        int row=mat.size();
        int col=mat[0].size();
        vector<int>v;
        int top=0,bottom=row-1,left=0,right=col-1;
        while(top<=bottom and left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                v.push_back(mat[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                v.push_back(mat[i][right]);
            }
            right--;
            
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
            {
                v.push_back(mat[bottom][i]);
            }
            }
            bottom--;
            if(left<=right)
            {
               for(int i=bottom;i>=top;i--)
            {
                v.push_back(mat[i][left]);
            }  
            break;
            }
            
        }
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends