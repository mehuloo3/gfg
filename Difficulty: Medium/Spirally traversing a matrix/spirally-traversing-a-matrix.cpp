//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        // code here
        int row=matrix.size();
        int col=matrix[0].size();
        int top=0,bottom=row-1,right=col-1,left=0;
        vector<int>ans;
        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
              ans.push_back(matrix[top][i]);
              top++;
            for(int i=top;i<=bottom;i++)
                ans.push_back(matrix[i][right]);
                right--;
            
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                    ans.push_back(matrix[bottom][i]);
                    bottom--;
            }
             
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                    ans.push_back(matrix[i][left]);
                    left++;
            }   
            
            
        }
        return ans;
        
//         vector<int> ans;
 
//   int n = mat.size(); // no. of nows
//   int m = mat[0].size(); // no. of columns
  
//   // Initialize the pointers reqd for traversal.
//   int top = 0, left = 0, bottom = n - 1, right = m - 1;

//   // Loop until all elements are not traversed.
//   while (top <= bottom && left <= right) {
      
//     // For moving left to right
//     for (int i = left; i <= right; i++)
//       ans.push_back(mat[top][i]);

//     top++;

//     // For moving top to bottom.
//     for (int i = top; i <= bottom; i++)
//       ans.push_back(mat[i][right]);

//     right--;
    
//     // For moving right to left.
//     if (top <= bottom) {
//       for (int i = right; i >= left; i--)
//       ans.push_back(mat[bottom][i]);

//       bottom--;
//     }

//     // For moving bottom to top.
//     if (left <= right) {
//       for (int i = bottom; i >= top; i--)
//         ans.push_back(mat[i][left]);

//       left++;
//     }
//   }
//   return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends