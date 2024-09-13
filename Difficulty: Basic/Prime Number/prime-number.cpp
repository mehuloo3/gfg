//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
// bool prime(int n)
// {
//     if(n==1||n==0)
//     {
//         return false;
//     }
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
int isPrime(int N){
        // code here
 if(N==1) return 0;
        if(N==2 || N==3) return 1;
        if(N%2==0 || N%3==0) return 0;
        for(int i=5; i*i<N; i=i+6)
        {
            if(N%i==0 || N%(i+2)==0)
            {
                return 0;
            }
        }
        return 1; 
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
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends