# Function should return an integer value
class Solution:
    def convertFive(self, n):
        # Code here
        m=str(n)
        x=m.replace("0","5")
        
        return int(x)

#{ 
 # Driver Code Starts
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        ob = Solution()
        print(ob.convertFive(int(input().strip())))
        print("~")
# } Driver Code Ends