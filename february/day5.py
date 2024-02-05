from collections import Counter
class Solution:
    def firstUniqChar(self, s: str) -> int:
        v = Counter(s)
        for i in range(len(s)):
            if v[s[i]] == 1: return i
        return -1
            