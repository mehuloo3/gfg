//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int fib(int N){
        //code here
        int a=0,b=1,c;
        if(N==0)
        return a;
        if(N==1)
        return b;
        
        for(int i=2;i<=N;i++)
        {
            c=(a+b)%10;
            a=b;
            b=c;
        }
        return c;
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
        cout << ob.fib(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends