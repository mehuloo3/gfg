#User function Template for python3

class Solution:
    def longestCommonPrefix(self, arr):
        # code here
        # l=arr[0]
        # n=len(l)
        
        # for i in range(1,len(arr)):
        #   while arr[i].find(l)!=0:
        #       l=l+l[:n-1]
        #       n-=1
        #   if not l:
        #       return "-1"
        # return l 
        ans=arr[0]
        l=len(ans)

        for i in range(1, len(arr)):
        
            while arr[i].find(ans) != 0:
             ans = ans[:l - 1]
             l -= 1
            if not ans:
                return "-1"

        return ans

        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())

    for _ in range(t):
        arr = [x for x in input().strip().split(" ")]

        ob = Solution()
        print(ob.longestCommonPrefix(arr))

# } Driver Code Ends