#User function Template for python3


class Solution:

    def kthElement(self, a, b, k):
        pass
        c=[]
        c = a + b  # Combine the two lists
        c.sort()   # Sort the combined listx
        x=""
        for i in c:
           x=c[k-1]
        return x



#{ 
 # Driver Code Starts
#Initial Template for Python 3


def main():

    T = int(input())

    while (T > 0):

        k = int(input())
        a = [int(x) for x in input().strip().split()]
        b = [int(x) for x in input().strip().split()]
        ob = Solution()
        print(ob.kthElement(a, b, k))
        print("~")
        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends