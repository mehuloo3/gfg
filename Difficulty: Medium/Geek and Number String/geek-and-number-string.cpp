//{ Driver Code Starts
//Initial template for C++
 
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int minLength(string s, int n) {
        // code here
        stack<int>temp;
        for(int i=0;i<n;i++)
        {
            if(temp.size()==0)
            {
                temp.push(s[i]);
            }
            else
            {
                if(temp.top()=='1' and s[i]=='2')
                {
                    temp.pop();
                }
                else  if(temp.top()=='2' and s[i]=='1')
                {
                    temp.pop();
                }
                else  if(temp.top()=='3' and s[i]=='4')
                {
                    temp.pop();
                }
                else if(temp.top()=='4' and s[i]=='3')
                {
                    temp.pop();
                }
                else if(temp.top()=='5' and s[i]=='6')
                {
                    temp.pop();
                }
                else  if(temp.top()=='6' and s[i]=='5')
                {
                    temp.pop();
                }
                else  if(temp.top()=='7' and s[i]=='8')
                {
                    temp.pop();
                }
                else  if(temp.top()=='8' and s[i]=='7')
                {
                    temp.pop();
                }
                else  if(temp.top()=='0' and s[i]=='9')
                {
                    temp.pop();
                }
                else  if(temp.top()=='9' and s[i]=='0')
                {
                    temp.pop();
                }
                else
                {
                    temp.push(s[i]);
                }
            }
        }
        return temp.size();
    } 
};


//{ Driver Code Starts.

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        Solution obj;
        cout << obj.minLength(s, n) << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends