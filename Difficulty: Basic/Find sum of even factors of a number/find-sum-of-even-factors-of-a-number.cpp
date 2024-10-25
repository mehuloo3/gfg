//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenFactors(int N){
        // code here
        int sum=0;
        for(int i=1;i<=N;i++)
        {
            if(N%i==0)
            {
                if(i%2==0)
                {
                    sum+=i;
                }
            }
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
        cout << ob.evenFactors(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends