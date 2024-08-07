//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        vector<int>ans;
        int res=0;
        for(int i=0;i<arr1.size();i++)
        {
            ans.push_back(arr1[i]);
        }
        for(int i=0;i<arr2.size();i++)
        {
            ans.push_back(arr2[i]);
        }
       sort(ans.begin(),ans.end());
       
    //   int i=1;
    //   while(i<=ans.size())
    //   {
    //       if(i==k)
    //       {
    //           return ans[i];
    //       }
    //       i++;
    //   int start=0;
    //   int end=ans.size()-1;
    //   while(start<=end)
    //   {
    //       int mid=start+(end-start)/2;
    //       if(mid==k)
    //       {
    //           return ans[mid];
    //       }
    //       else if(k<mid)
    //       {
    //           end=mid-1;
    //       }
    //       else
    //          start=end+1;
    //   }
    return ans[k-1];
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl;
    }
    return 0;
}
// } Driver Code Ends