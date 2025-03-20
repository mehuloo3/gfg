//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
    int fBuy = INT_MIN;  
    int fSell = 0;      
    int sBuy = INT_MIN; 
    int sSell = 0;      
    for (int i=0;i<prices.size();i++)
    {

        fBuy= max(fBuy,-prices[i]);
        fSell=max(fSell,fBuy+prices[i]);
        sBuy = max(sBuy, fSell - prices[i]);
        sSell = max(sSell, sBuy + prices[i]);
    }
    return sSell;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxProfit(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends