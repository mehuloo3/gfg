//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &a, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &a[i]);
        }
    }

    template <class T>
    static void print(vector<T> &a) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
  struct Order {
    int index;
    int tipA;
    int tipB;
    int diff;
};
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code here
        vector<Order> orders(n);
    
    // Create orders with their differences
    for (int i = 0; i < n; ++i) {
        orders[i] = {i, arr[i], brr[i], abs(arr[i] - brr[i])};
    }
    
    // Sort orders based on the absolute difference in descending order
    sort(orders.begin(), orders.end(), [](const Order &a, const Order &b) {
        return a.diff > b.diff;
    });
    
    long long totalTips = 0;
    int countA = 0, countB = 0;
    
    for (const auto &order : orders) {
        if ((order.tipA >= order.tipB && countA < x) || countB >= y) {
            // Assign to type A
            totalTips += order.tipA;
            ++countA;
        } else {
            // Assign to type B
            totalTips += order.tipB;
            ++countB;
        }
    }
    
    return totalTips;
     

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

        int y;
        scanf("%d", &y);

        vector<int> arr(n);
        Array::input(arr, n);

        vector<int> brr(n);
        Array::input(brr, n);

        Solution obj;
        long long res = obj.maxTip(n, x, y, arr, brr);

        cout << res << endl;
    }
}

// } Driver Code Ends