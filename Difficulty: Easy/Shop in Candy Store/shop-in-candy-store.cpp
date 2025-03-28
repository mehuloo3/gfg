//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies,candies+N);
        int i=0;
        int j=N-1;
        int ans1=0,ans2=0;
        while(i<=j)
        {
            ans1+=candies[i];
            i++;
            j-=K;
        }
        i=N-1;
        j=0;
        while(i>=j)
        {
            ans2+=candies[i];
            i--;
            j+=K;
        }
        return {ans1,ans2};
        
        }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends