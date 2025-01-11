//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    string stringFilter(string str) 
    { 
        //code here.
        int n=str.size();
        int k=0;
        string s="";
        for(int i=0;i<n;i++)
        {
            if(str[i]=='b')
            {
                continue;
            }
            else if(str[i]=='a' and str[i+1]=='c')
            {
                i++;
                continue;
            }else
            s+=str[i];
        }
        return s;
    } 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		
   		Solution ob;
   		cout <<ob.stringFilter(s) << "\n";

   		
   	
cout << "~" << "\n";
}

    return 0;
}
// } Driver Code Ends