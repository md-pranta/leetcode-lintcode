class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        dic = {}
        for i, v in enumerate(nums):
            dic[v]=i
        for i, v in enumerate(nums):
            find = target - v
            if find in dic and dic[find] != i:
                return [i, dic[find]]

class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        hashmap = {}
        for i in range(len(nums)):
            complement = target - nums[i]
            if complement in hashmap:
                return [i, hashmap[complement]]
            hashmap[nums[i]] = i