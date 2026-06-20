class Solution:
    def getLastDigit(self, a, b):
        # code here
        c=int(a);
        d=int(b);
        return pow(c%10,d,10);