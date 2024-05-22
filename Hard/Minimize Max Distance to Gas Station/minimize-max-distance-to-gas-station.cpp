//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  bool check(double mid, vector<int>&arr, int k){
        int n=arr.size();
        int count=0;
        for(int i=1;i<n;i++){
            int dist=arr[i]-arr[i-1];
            if(dist<=mid){
                continue;
            }
            else{
                count+=int(dist/mid);
            }
        }
        return count<=k;
    }
  
    double findSmallestMaxDist(vector<int> &stations, int k) {
        // Code here
        int n=stations.size();
        double lo=0.0;
        double hi=0.0;
        for(int i=1;i<n;i++){
            if(hi<stations[i]-stations[i-1]){
                hi=stations[i]-stations[i-1];
            }
        }
        double ans=hi;
        while(hi-lo>1e-9){
            double mid= (hi-lo)/2.0 + lo;
            if(check(mid, stations, k)){
                ans=mid;
                hi=mid;
            }
            else{
                lo=mid;
            }
        }
        return ans;
//   bool check(int mid,vector<int>&arr,int k)
//   {
//       int count=0;
//       int n=arr.size();
//       for(int i=1;i<n;i++)
//       {
//           int dist=arr[i]-arr[i-1];
//           if(dist<=mid)
//           {
//               continue;
//           }
//           else
//           {
//               count=count+(dist/mid);
//           }
//       }
//       return count<=k;
//   }
//     double findSmallestMaxDist(vector<int> &stations, int k) {
//         // Code here
//         int n=stations.size();
//         double start=0.0;
//         double end=0.0;
//         for(int i=1;i<n;i++)
//         {
//             if(end<stations[i]-stations[i-1]){
//                 end=stations[i]-stations[i-1];
//             }
//             // end=max(end,stations[i]-stations[i-1]);
//         }
//         double answer=end;
//         while(end-start>1e-9)
//         {
//             double mid=start+(end-start)/2.0;
//             if(check(mid,stations,k))
//             {
//                 answer=mid;
//                 end=mid;
//             }
//             else
//             {
//                 start=mid;
//             }
//         }
//         return answer;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> stations(n);
        for (int i = 0; i < n; i++) {
            cin >> stations[i];
        }
        int k;
        cin >> k;
        Solution obj;
        cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k)
             << endl;
    }
    return 0;
}
// } Driver Code Ends