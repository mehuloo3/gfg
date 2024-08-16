//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &arr) {
        // Your code here
        // int start=0;
        // int sum1=0,sum2=0;
        // int end=arr.size()-1;
        // while(start<=end)
        // {
        //     int mid=start+(end-start)/2;
            
        //     while(start<=mid)
        //     {
        //         sum1+=arr[start];
        //         start++;
        //     }
        //     while(mid+1<=end)
        //     {
        //         sum2+=arr[start];
        //     }
        // }
        // if(sum1==sum2) return sum1;
        
    
    int sum1=0,sum2=0;
    for(int i=0;i<arr.size();i++)
    {
        sum1+=arr[i];
    }
    int i=0;
    while(i<=arr.size())
    {
        sum2+=arr[i];
        if(sum2==sum1)
        {
            return i+1;
        }
        sum1-=arr[i];
        i++;
    }
    return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<long long> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.equilibriumPoint(arr) << endl;
    }
}
// } Driver Code Ends