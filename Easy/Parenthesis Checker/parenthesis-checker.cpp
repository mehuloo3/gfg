//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        // int n=x.length();
        // int cnt1=0;
        // int cnt2=0;
        // int i=0;
        // int c=0;
        // while(i<n)
        // {
        //     if((x[i]=='(') && (x[i]=='{') && (x[i]=='[') && (x[i]=='}') && (x[i]==']') && (x[i]==')') )  
        //     {
        //         c=1;
        //     }
        //     return false;
        // }
      
        // for(int i=0;i<n;i++)
        // {
        //     if((x[i]=='{') || (x[i]=='[') || (x[i]=='('))
        //     {
        //         cnt1++;
        //     }
        //     if((x[i]=='}') || (x[i]==']') || (x[i]==')'))
        //     {
        //         cnt2++;
        //     }
        // }
        // if(cnt1==cnt2)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        stack<char>ans;
        for(int i=0; i<x.length(); i++)
        {
            if(x[i]=='{' || x[i]=='[' || x[i]=='(' )
            {
                ans.push(x[i]);
            }
            else if(x[i]=='}' || x[i]==']' || x[i]==')')
            {
                if(ans.empty())
                {
                    return 0;
                }
                else{
                    char ch=x[i];
                    char top = ans.top();
                    if(top=='{' && ch=='}' || top=='[' && ch==']' || top=='(' && ch==')')
                    {
                        ans.pop();
                    }
                    else{
                        return 0;
                    }
                }
            }
            
        }
        if(ans.empty())
        {
            return true;
        }
        
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends