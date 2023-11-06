class Solution:
    def getWinner(self, arr: list[int], k: int) -> int:
        maxNumber = max(arr)
        current = arr[0]
        win = 0
        for i in range(1, len(arr)):
            if current > arr[i]:
                win += 1
            else:
                current = arr[i]
                win = 1
            if win == k or maxNumber == current:
                return current
print(['null']*5)