class Solution:
    def arrayStringsAreEqual(self, word1: list[str], word2: list[str]) -> bool:
        s = ''
        t = ''
        for w in word1:
            s += w
        for w in word2:
            t += w
        
        return s == t