class Solution:
    def getLastMoment(self, n: int, left: list[int], right: list[int]) -> int:
        l, r = 0, 0
        if left :l = max(left)
        if right: r = n - min(right)
        return max(l, r)