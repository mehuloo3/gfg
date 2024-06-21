//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int repeatedSumOfDigits(int N){
        // code here 
       int sum=0; 
       if(N<10)
       return N;
       else{
       while(N!=0)
       {
           sum+=N%10;
           N=N/10;
       }
       }
       return repeatedSumOfDigits(sum);
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.repeatedSumOfDigits(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends