class Solution:
    def largestOddNumber(self, num: str) -> str:
        n = len(num)-1
        while(n>=0):
            if int(num[n])& 1:
                break
            n -= 1
        if n < 0:return ''
        else: return num[0:n+1]