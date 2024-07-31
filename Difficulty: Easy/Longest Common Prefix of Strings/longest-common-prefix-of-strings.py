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
        result = arr[0]
        length = len(result)

        for i in range(1, len(arr)):
        # Find the index of result in the current string
            while arr[i].find(result) != 0:
            # Update the matched substring prefix
             result = result[:length - 1]
             length -= 1

            # Check for an empty case and return if true
            if not result:
                return "-1"

        return result

        
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