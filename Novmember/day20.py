class Solution:
    def garbageCollection(self, garbage: list[str], travel: list[int]) -> int:
        n = len(garbage)
        total = 0
        m,p,g = 0, 0, 0
        f1,f2,f3 = 1,1 ,1
        for i in range(n-1,-1,-1):
            if f1 and 'M' in garbage[i]:
                m = i
                f1 = 0
            if f2 and 'P' in garbage[i]:
                p = i
                f2 = 0
            if f3 and 'G' in garbage[i]:
                g = i
                f3 = 0
            total += len(garbage[i])
        for i in range(max(m, p, g)):
            if i < m:
                total += travel[i]
            if i < p:
                total += travel[i]
            if i < g:
                total += travel[i]
        return total
            