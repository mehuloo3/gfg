//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        int fre[26]={0};
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                fre[s[i]-'A']++;
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                fre[s[i]-'a']++;
            }
        }
        for(int i=0;i<=25;i++)
        {
            if(fre[i]==0)
            {
                return false;
            }
        }
        return true;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends