//{ Driver Code Starts
// Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution{
public:
    int rotationCount(long long R, long long D)
    {
        // code here
        // string x=to_string(R);
        // string y=to_string(D);
        // int ans=0;
        // for(int i=0;i<x.size();i++)
        // {
        //   int val=abs((int)(x[i])-(int)(y[i]));
        //   if(val>5)
        //   {
        //       val=10-val;
        //   }
        //   ans+=val;
        // }int x
        // return ans;
        int ans=0;
        int x;
        int y;
        while(R)
        {
            x=R%10;
            y=D%10;
            
            R/=10;
            D/=10;
            ans+=min(abs(x-y),10-abs(x-y));
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long R, D;
        cin>>R>>D;
        
        Solution ob;
        cout<<ob.rotationCount(R, D)<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends