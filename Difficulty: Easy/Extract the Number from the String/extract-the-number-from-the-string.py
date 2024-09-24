class Solution:
    def ExtractNumber(self,sentence):
        #code here
        
        l=sentence.split(" ")
        x=[]
        y=[]
        for i in l:
            if i.isdigit() and "9" not in i:
               x.append(int(i))
        if len(x)==0:
                return -1
        else:
                z=max(x)
        return z



#{ 
 # Driver Code Starts
t = int(input())
for _ in range(t):
    S = input()
    ob = Solution()
    ans = ob.ExtractNumber(S)
    print(ans)

# } Driver Code Ends