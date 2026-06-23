class Solution {
  public:
    int maxArea(vector<int> &height) {
        // code 
        int start=0;
        int end=height.size()-1;
        int x=0;
        while(start<end)
        {
         int a=end-start-1;
         int b=min(height[start],height[end]);
         
         int ans=a*b;
         x=max(ans,x);
         
         if(height[start]<=height[end])
         {
             start++;
         }else
         {
             end--;
         }
        }
        return x;
      
    }
};