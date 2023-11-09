class Solution:
    def countHomogenous(self, s: str) -> int:
        n = len(s)
        ans = 1
        i = 1
        cnt = 1
        while i < n:
            if s[i] == s[i-1]:
                cnt += 1
            else:
                cnt = 1
            i+=1
            ans = (ans + cnt)%(10**9+7)
        return ans


s = Solution()
print(s.countHomogenous("abbcccaa"))