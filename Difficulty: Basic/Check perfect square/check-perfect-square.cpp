//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
bool perfect(long long x)
{
    if(x>=0)
    {
        long long a=sqrt(x);
        
        if(a*a==x)
        {
            return true;
        }
    }
    return false;
}
    int checkPerfectSquare(int N){
        // code here
        if(perfect(N))
        {
            return 1;
        }
        else
        return 0;
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
        cout << ob.checkPerfectSquare(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends