//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
//   bool binarySearch(vector<int> &arr, int n, int x, int pos){
//       int start=0;
//       int end=n-1;
//       while(start<=end)
//       {
//           int mid=(start-end)/2;
//           if(arr[mid]==x && mid!=pos)
//           {
//               return true;
//           }
//           else if(arr[mid]<x)
//           {
//               start=mid+1;
//           }
//           else
//           {
//               end=mid-1;
//           }
//       }
//       return false;
//   }
    int findPair(int n, int x, vector<int> &arr) {
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n;j++){
    //             if(abs(arr[i]-arr[j])==x){
    //                 return 1;
    //             }
    //         }
    //     }
    //     return -1;]
    // sort(arr.begin(),arr.end());
    // for(int i=0;i<n;i++)
    // {
    //  int find=arr[i]+x;
    //  if(binarySearch(arr,n,find,i)==true){
    //         return 1;   
    // }
    // }
    // return -1;
    sort(arr.begin(), arr.end());
        for(int i = 0; i < n; i++)
        {
            int low = i;
            int high = n-1;
            while(low <= high)
            {
                int mid = (low + high)/2;
                if((arr[mid] == arr[i] + x) && (mid != i))
                    return 1;
                else if(arr[mid] > arr[i] + x)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        vector<int> arr(n);
        Array::input(arr, n);

        Solution obj;
        int res = obj.findPair(n, x, arr);

        cout << res << endl;
    }
}

// } Driver Code Ends