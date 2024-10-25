//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long evenNumSubstring(string str);

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << evenNumSubstring(s) << endl;
    
cout << "~" << "\n";
}
return 0;
}





// } Driver Code Ends


long long evenNumSubstring(string S){
    //complete the function here
        long long cnt=0;
        for(int i=0;i<S.size();i++)
        {
            // for(int j=1;j<=S.size()-i;j++)
            // {
            //  string x=S.substr(i,j);
            //  int y=stoi(x);
            //   if(y%2==0)
            //   {
            //       cnt++;
            //   }
            // }
            
            if((S[i]-'0')%2==0)
            {
                cnt+=(i+1);
            }
        }
        return cnt;
};