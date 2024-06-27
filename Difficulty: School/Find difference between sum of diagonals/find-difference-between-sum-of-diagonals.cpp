//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
        // code here
        int s1=0,s2=0;
         for(int i=0;i<Grid.size();i++)
        {
            for(int j=0;j<Grid[0].size();j++)
            {
                if(i==j){
                s1+=Grid[i][j];}
                
                if(i+j==Grid.size()-1)
                {
                s2+=Grid[i][j];
                }
            }
        }
        return abs(s1-s2);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> Grid1(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> Grid1[i][j];
        Solution ob;
        cout << ob.diagonalSumDifference(N, Grid1) << "\n";
    }
}
// } Driver Code Ends