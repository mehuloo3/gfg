class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        string str="";
        for(auto i:s)
        {
            if(i==' ')
            {
                continue;
            }
            str+=i;
        }
        return str;
    }
};