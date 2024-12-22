//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            int current=0,index=0,ne=0;
            for(int i=0;i<Mat.size();i++)
            {
                int cnt=0;
                for(int j=0;j<Mat[0].size();j++)
                {
                    if(Mat[i][j]==1)
                    {
                        cnt++;
                        index=i;
                    }
                }
                if(cnt>current)
                    {
                       current=cnt;
                       ne=index;
                       
                    }
            }
            return ne;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends