//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findPages(vector<int> &A, int k) {
        // code here
        int M=k;
        int N=A.size();
        if(M>N)
        return -1;
        
        int start=0,end=0,mid,ans;
        for(int i=0;i<N;i++)
        {
            start=max(start,A[i]);
            end=end+A[i];
        }
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int pages=0,count=1;
            for(int i=0;i<N;i++)
            {
                pages=pages+A[i];
                if(pages>mid)
                {
                    count++;
                    pages=A[i];
                }
            }
            if(count<=M)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends