//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        double a=0,b=0,c=0,d=0;
        int i=0,n=str.length();
        while(str[i]!='/')
        {
            a=a*10+(str[i]-'0');
            i++;
        }
        i++;
        while(str[i]!=',')
        {
            b=b*10+(str[i]-'0');
            i++;
        }
        i+=2;
        while(str[i]!='/')
        {
            c=c*10+(str[i]-'0');
            i++;
        }
        i++;
        while(i<n)
        {
            d=d*10+(str[i]-'0');
            i++;
        }
        
        string f1=to_string(int (a))+'/'+to_string(int(b));
        string f2=to_string(int (c))+'/'+to_string(int(d));
        
        if(a/b==c/d) return "equal";
        else if(a/b>c/d) return f1;
        else return f2;
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends