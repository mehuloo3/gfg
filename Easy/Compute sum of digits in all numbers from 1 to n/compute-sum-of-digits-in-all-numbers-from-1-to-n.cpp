//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
int cnt(int n)
{
    int sum=0;
    while(n!=0)
    {
        int x=n%10;
        sum+=x;
        n=n/10;
    }
    return sum;
}
int sumOfDigits(int N){
        //code here
        int sum=0;
        for(int i=1;i<=N;i++)
        {
              sum+=cnt(i);
        }
        return sum;
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
        cin>>N;
        Solution ob;
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends