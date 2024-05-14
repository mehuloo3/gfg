//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
  public:
    int MinimumEffort(int rows, int cols, vector<vector<int>> &heights) {
        // code here
        // priority_queue<pair<int,<pair<int,pair<int>>,vector<pair<int,pair<int,int>>>,g<pair<int,pair<int,int>>>>p;
        //  priority_queue<pair<int, pair<int, int>>,
        //               vector<pair<int, pair<int, int>>>,
        //               greater<pair<int, pair<int, int>>>>p;
        // int n=heights.size();
        // int m=heights[0].size();
        // vector<vector<int>>Dist(n,vector<int>(m,1e9));
        // Dist[0][0];
        // p.push({0,{0,0}});
        // int destrow[]={-1,0,1,0};
        // int destcol[]={0,1,0,-1};
        
        // while(!p.empty())
        // {
        //     auto it=p.top();
        //     p.pop();
        //     int diff=it.first;
        //     // int row=it.second.first;
        //     // int col=it.second.second;
        //     rows=it.second.first;
        //     cols=it.second.second;
        //     // if(row==n && col==m-1)
        //     // {
        //     //     return diff;
        //     // }
        //     if(rows==n && cols==n)
        //     {
        //         return diff;
        //     }
        //     for(int i=0;i<n;i++)
        //     {
        //         // int nrow=row+destrow[i];
        //         // int ncol=col+destcol[i];
                
        //         int nrow=rows+destrow[i];
        //         int ncol=cols+destcol[i];
        //         if(nrow>=0 && ncol>=0 && nrow<n && ncol<m)
        //         {
        //             // int X=max(abs(heights[row][col])-heights[nrow][ncol]);
        //             int X=max(abs(heights[rows][cols]-heights[nrow][ncol]),diff);
        //             if(X<Dist[nrow][ncol])
        //             {
        //                 Dist[nrow][ncol] = X;
        //                 p.push({X, {nrow, nrow}});
        //             }
        //         }
        //     }
        // }
        
         priority_queue<pair<int, pair<int, int>>,
                   vector<pair<int, pair<int, int>>>,
                   greater<pair<int, pair<int, int>>>> p;

    int n = heights.size();
    int m = heights[0].size();
    vector<vector<int>> Dist(n, vector<int>(m, INT_MAX));

    p.push({0, {0, 0}});
    Dist[0][0] = 0;

    int destrow[] = {-1, 0, 1, 0};
    int destcol[] = {0, 1, 0, -1};

    while (!p.empty()) {
        auto it = p.top();
        p.pop();
        int diff = it.first;
        int row = it.second.first;
        int col = it.second.second;

        if (row == n - 1 && col == m - 1) {
            return diff;
        }

        for (int i = 0; i < 4; i++) {
            int nrow = row + destrow[i];
            int ncol = col + destcol[i];

            if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m) {
                int X = max(abs(heights[row][col] - heights[nrow][ncol]), diff);
                if (X < Dist[nrow][ncol]) {
                    Dist[nrow][ncol] = X;
                    p.push({X, {nrow, ncol}});
                }
            }
        }
    }
        return 0;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int rows;
        scanf("%d", &rows);

        int columns;
        scanf("%d", &columns);

        vector<vector<int>> heights(rows, vector<int>(columns));
        Matrix::input(heights, rows, columns);

        Solution obj;
        int res = obj.MinimumEffort(rows, columns, heights);

        cout << res << endl;
    }
}

// } Driver Code Ends