#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3
class Solution:
	
	def findSum(self,arr):
		# code here
		l=set(arr)
		sum=0
		for i in l:
		    sum=sum+i;
		return sum;

#{ 
 # Driver Code Starts.
#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        arr = list(map(int, input().split()))
        ob = Solution()
        res = ob.findSum(arr)
        print(res)
        # print("~")
        t -= 1


# } Driver Code Ends