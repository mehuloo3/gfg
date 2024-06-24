//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string sentence) {

        // code here
        string s=sentence;
        long long num=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0')
            {
                if(s[i]<'9')    num=num*10+(s[i]-'0');
                else if(s[i]=='9')
                {
                    while(s[i]!=' ' && i<s.size()) 
                    i++;
                    num=0;
                }
            }
            if(s[i]==' ' || i==s.size()-1)
            {
                if(num) ans=max(ans,num);
                num=0;
            }
        }
        return ans?ans:-1;
        // vector<string>str;
        // int n=sentence.length();
        // int i=0;
        // while(sentence[i]<=n)
        // {
        //     if(sentence[i]==isdigit(i) && sentence[i]!='9')
        //     {
        //         if(string[i]=='9')
        //         {
        //             break;
        //         }
        //         else
        //         str.push_back(sentence[i]);
        //     }
        //     i++;
        // }
        // i++;
        
        // return 
        
        //  stringstream ss(sentence);

        // string temp;

        // vector<string> v;

        // while(ss>>temp){

        //   v.push_back(temp);  

        // }

        // vector<long long> res;

        // for(int i=0; i<v.size(); i++){

        //     if(all_of(v[i].begin(), v[i].end(), ::isdigit)){

        //         if(v[i].find('9')==string::npos) res.push_back(stoll(v[i]));

        //     }

        // }

        // if(!res.size()) return -1;

        // else {

        //     sort(res.begin(), res.end());

        //     return res[res.size()-1];

        // }
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends