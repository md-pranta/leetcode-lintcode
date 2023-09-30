class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        dic={}
        for i, val in enumerate(numbers):
            if target - val in dic:
                return [dic[target-val]+1, i+1]
            else:
                dic[val]=i