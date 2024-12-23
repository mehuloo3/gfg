//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int>ans;
        vector<int>res;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=0)
            {
                ans.push_back(arr[i]);
            }
            else
            {
                res.push_back(arr[i]);
            }
        }
        int n=ans.size();
        int m=res.size();
        int k=0,l=0,j=0;
        while(l<n and j<m)
        {
          if(k%2==0){
                arr[k++]=ans[l++];
            }
            else
            {
                arr[k++]=res[j++];
            }  
        }
        while(l<n)
        {
    
                arr[k++]=ans[l++];
        }
        while(j<m)
        {
             arr[k++]=res[j++];
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends