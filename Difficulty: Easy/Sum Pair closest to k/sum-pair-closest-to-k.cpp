//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int k) {
        // code here
       vector<int>ans(2);
       int i=0;
       int j=arr.size()-1;
       int mini=INT_MAX;
       int x=INT_MIN;
       while(i<j)
       {
           int sum=arr[i]+arr[j];
           int diff=abs(sum-k);
           if(diff<mini)
           {
               mini=diff;
            //   if(abs(arr[i]-arr[j])>x)
            //   mini=diff;
            //   {
                   ans[0]=arr[i];
                   ans[1]=arr[j];
            //   
        //   }
           }
           if(sum<=k)
           {
               i++;
           }
           else
           {
               j--;
           }
       }
       return ans;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, k);
        cout << ans[0] << " " << ans[1] << "\n";
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends