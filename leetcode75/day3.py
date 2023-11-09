class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        max_candie = max(candies)
        li = []
        for i in range(len(candies)):
            if max_candie <= candies[i]+extraCandies:
                li.append(True)
            else:
                li.append(False)
        return li