//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
int dfs(int curr, vector<vector<int>> &adj, vector<bool> &vis, int &ans )
    {
        int size = 1;
        vis[curr] = true;
        for(auto x : adj[curr])
        {
            if(vis[x] == false)
            {
                int temp = dfs(x, adj, vis, ans);
                if(temp % 2 == 0)
                    ans++;
                size += temp;
            }
            
        }
        return size;
    }
	int minimumEdgeRemove(int n, vector<vector<int>>edges){
	    // Code here
	    vector<vector<int>> adj(n+1);
        int ans = 0;
        for(int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool> vis(n+1,false);
        for(int i = 1; i <= n; i++)
        {
            if(vis[i] == false)
                dfs(i,adj,vis,ans);
        }
        return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>edges;
		for(int i = 0; i < n-1; i++){
			int x, y;
			cin >> x >> y;
			edges.push_back({x,y});
		}
		Solution obj;
		int ans = obj.minimumEdgeRemove(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}

// } Driver Code Ends