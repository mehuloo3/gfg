//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}


// } Driver Code Ends


//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    stack<char>str;
    vector<char>v;
    for(int j=0;j<len;j++)
    {
        str.push(S[j]);
    }
    int i=0;
    while(!str.empty())
    {
        char x=str.top();
        S[i]=x;
        i++;
        str.pop();
    }
    return S;
}