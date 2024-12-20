//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
        int row=mat.size();
        int col=mat[0].size();
        int top=0,bottom=row-1,left=0,right=col-1;
        vector<int>v;
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
            if(top<=bottom){
            for(int i=right;i>=left;i--)
            {
                v.push_back(mat[bottom][i]);
            }
            bottom--;
            }
            
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    v.push_back(mat[i][left]);
                }
            left++;
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
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends